#include "../src/add.h"
#include "unity.h"

static int a = 0;
static int b = 0;

void setUp(void) {
    a = 19;
    b = 23;
}

void tearDown() {
    a = 0;
    b = 0;
}

void test_add_should_add(void) {
    int result = add(a, b);
    TEST_ASSERT(result == 42);
}

void test_add_should_add_fail(void) {
    int result = add(a, b);
    TEST_ASSERT(result == 41);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add_should_add);
    RUN_TEST(test_add_should_add_fail);
    return UNITY_END();
}
