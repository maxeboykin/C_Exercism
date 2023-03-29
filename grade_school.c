//
// Created by maxboykin on 3/29/23.
//

#include "grade_school.h"
#include <string.h>
#include <stdlib.h>
// https://exercism.org/tracks/c/exercises/grade-school/solutions/bobahop
void init_roster(roster_t * roster) {
    if (!roster) return;
    roster->count = 0;
    memset(roster->students, 0, sizeof(roster->students));
}
// https://www.youtube.com/watch?v=rHoOWG6Ihs4
static int student_t_comparator(const void *lhs, const void *rhs)
{   // on the right hand side we are casting the * pointer to void to a pointer to a struct student_t pointer
    // NOT Positive: then we are going to dereference the pointer by having the * in front of left and right
    student_t *left = (student_t *)lhs;
    student_t *right = (student_t *)rhs;
    if(left->grade - right->grade) return left->grade - right->grade;
    return strcmp(left->name, right->name);
    // https://www.youtube.com/watch?v=Vx3GyTVFcMA&list=PLA1FTfKBAEX4hblYoH6mnq0zsie2w6Wif&index=39
}

bool add_student(roster_t *roster, const char * student_name, uint8_t student_grade) {
    if (!roster || !student_name) return false;
    if(roster->count >= MAX_STUDENTS) return false;

    for (size_t i = 0; i < roster->count; i++)
        if (!strcmp(roster->students[i].name, student_name)) return false;

    roster->students[roster->count].grade = student_grade;
    strcpy(roster->students[roster->count++].name, student_name); // wouldnt this be a memory out of reach by 1?

    qsort(roster->students, roster->count, sizeof(student_t), student_t_comparator);
    return true;
}

roster_t get_grade(roster_t * roster, uint8_t desired_grade)
{
    roster_t output_roster;
    output_roster.count = 0;
    memset(output_roster.students, 0, sizeof(output_roster.students));
    if (!roster) return output_roster;

    for (size_t i = 0; i < roster->count; i++){
        if (roster->students[i].grade != desired_grade) continue;
        output_roster.students[output_roster.count].grade = roster->students[i].grade;
        strncpy(output_roster.students[output_roster.count++].name, roster->students[i].name, MAX_NAME_LENGTH);
    }
    return output_roster;

}