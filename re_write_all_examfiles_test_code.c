#include <stdio.h>
#include <string.h>

#define TEST_MODE
#include "ONLINE_EXAM_SYSTEM.c"

/* -------- Test Case 4: Rewrite & Reload Exams -------- */
void test_rewrite_and_load_exam(void) {

    /* Prepare exam data in memory */
    ecount = 1;

    ebank[0].examId = 3;
    strcpy(ebank[0].title, "Final Exam");
    ebank[0].startTime = 1;
    ebank[0].endTime = 10;
    ebank[0].duration = 60;
    ebank[0].qCount = 1;
    ebank[0].qids[0] = 1;

    /* Rewrite exams file and reload */
    rewrite_all_exams_file();
    load_exams_from_file();

    /* Verify exam data */
    if (ecount == 1 && ebank[0].examId == 3)
        printf("TEST CASE 4 PASSED\n");
    else
        printf("TEST CASE 4 FAILED\n");
}
