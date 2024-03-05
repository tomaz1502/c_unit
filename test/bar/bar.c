#include "../../src/sub.h"
#include "../minunit.h"

MU_TEST
(test_sub)
{
    int a = 23;
    int b = 19;
    mu_check(sub(a, b) == 4);
}

MU_TEST
(test_sub_diff)
{
    int a = 23;
    int b = 19;
    mu_check(sub(a, b) != 5);
}

MU_TEST
(test_sub_fail)
{
    int a = 23;
    int b = 19;
    mu_check(sub(a, b) == 3);
    mu_check(sub(a, b) == 4);
}

MU_TEST_SUITE
(test_suite_sub)
{
    /* MU_SUITE_CONFIGURE(&test_setup, &test_teardown); */
    MU_RUN_TEST(test_sub);
    MU_RUN_TEST(test_sub_diff);
    MU_RUN_TEST(test_sub_fail);
}
