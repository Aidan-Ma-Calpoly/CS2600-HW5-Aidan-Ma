#include "unity.h"
#include "calculator.h"

void setUp(void)
{
    //Empty Void (No need for now)
}

void tearDown(void)
{
    //Empty Void (No need for now)
}

void test_add_positive_numbers(void){
    TEST_ASSERT_EQUAL(5, add(2,3));
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_add_positive_numbers);
    return UNITY_END();
}