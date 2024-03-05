#include "../add.h"
#include "minunit.h"

MU_TEST
(test_add)
{
    int a = 19;
    int b = 23;
    mu_check(add(a, b) == 42);
}

MU_TEST
(test_add_diff)
{
    int a = 19;
    int b = 23;
    mu_check(add(a, b) != 41);
}

MU_TEST
(test_add_fail)
{
    int a = 19;
    int b = 23;
    mu_check(add(a, b) == 42);
    mu_check(add(a, b) == 41);
}

MU_TEST_SUITE
(test_suite)
{
    /* MU_SUITE_CONFIGURE(&test_setup, &test_teardown); */
    MU_RUN_TEST(test_add);
    MU_RUN_TEST(test_add_diff);
    MU_RUN_TEST(test_add_fail);
}
