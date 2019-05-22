#include "avg_and_max.h"
#include <stdio.h>
#include <stdlib.h>
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>

void test_average(void) {
    double avg_test[5] = {1,2,3,4,5};
    double result = average(avg_test, 5);
    CU_ASSERT_EQUAL(result, 3);

}

int maxi(int i1, int i2) {
    return (i1 > i2) ? i1 : i2;
}

void test_maxi(void) {
    CU_ASSERT(maxi(0,2) == 2);
    CU_ASSERT(maxi(0,-2) == 0);
    CU_ASSERT(maxi(2,2) == 2);
}

int main() {

    //double avg_array[5] = {1,2,3,4,5};
    //printf("Average: %d", average(avg_array,5));
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("max_test", 0, 0);
    CU_add_test(suite, "max_fun", test_maxi);
    CU_basic_set_mode(CU_BRM_VERBOSE);
    //CU_console_run_tests();
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}
