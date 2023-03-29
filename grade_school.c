//
// Created by Max Boykin on 3/28/23.
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

static int student_t_comparator(const void *lhs, const void *rhs)
{
    student_t *left = (student_t*)lhs;
    student_t *right = (student_t*)rhs;

}