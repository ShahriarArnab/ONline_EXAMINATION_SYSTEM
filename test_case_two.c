#include <stdio.h>

#define TEST_MODE
#include "ONLINE_EXAM_SYSTEM.C"

void test_case_2(void)
{
    qcount = 2;
    qbank[0].qid = 5;
    qbank[1].qid = 9;

    int id = next_qid();

    if (id == 10)
        printf("TEST CASE 2 PASSED\n");
    else
        printf("TEST CASE 2 FAILED\n");
}
