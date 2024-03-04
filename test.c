#include "add.h"
#include "minunit.h"

static int a = 0;
static int b = 0;

void
test_setup(void)
{
    a = 19;
    b = 23;
}

void
test_teardown(void)
{
    /* NO OP */
}

MU_TEST
(test_add)
{
    mu_check(add(a, b) == 42);
}

MU_TEST
(test_add_diff)
{
    mu_check(add(a, b) != 41);
}

MU_TEST
(test_add_fail)
{
    mu_check(add(a, b) == 41);
}


MU_TEST_SUITE
(test_suite)
{
    MU_SUITE_CONFIGURE(&test_setup, &test_teardown);

    MU_RUN_TEST(test_add);
    MU_RUN_TEST(test_add_diff);
    MU_RUN_TEST(test_add_fail);
}

int
main(void)
{
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
}
