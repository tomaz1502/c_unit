#include "test.c"

int main(void)
{
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}
