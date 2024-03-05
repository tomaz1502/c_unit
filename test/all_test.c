#include "foo/foo.c"
#include "bar/bar.c"

int main(void)
{
    MU_RUN_SUITE(test_suite_add);
    MU_RUN_SUITE(test_suite_sub);
    MU_REPORT();
    return 0;
}
