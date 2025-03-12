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

void test_add_positive_and_negative_numbers(void){
    TEST_ASSERT_EQUAL(1, add(5,-4));
}

void test_add_negative_numbers(void){
    TEST_ASSERT_EQUAL(-7, add(-3,-4));
}

void test_add_zero(void){
    TEST_ASSERT_EQUAL(10, add(10,0));
    TEST_ASSERT_EQUAL(0, add(0,0));
}

void test_add_overflow(void){
    int result = add(INT_MAX, 1);
    TEST_ASSERT_TRUE(result < 0);
}

void test_add_underflow(void){
    int result = add(INT_MIN, -1);
    TEST_ASSERT_TRUE(result > 0);
}

void test_subtract_positive_numbers(void){
    TEST_ASSERT_EQUAL(10, subtract(20,10));
}

void test_subtract_positive_and_negative_numbers(void){
    TEST_ASSERT_EQUAL(10, subtract(5,-5));
}

void test_subtract_negative_numbers(void){
    TEST_ASSERT_EQUAL(10, subtract(-15,-25));
}

void test_subtract_zero(void){
    TEST_ASSERT_EQUAL(5, subtract(5,0));
    TEST_ASSERT_EQUAL(-5, subtract(0,5));
}

void test_multiply_positive_numbers(void){
    TEST_ASSERT_EQUAL(12, multiply(3,4));
}

void test_multiply_positive_and_negative_numbers(void){
    TEST_ASSERT_EQUAL(-15, multiply(-3,5));
}

void test_multiply_negative_numbers(void){
    TEST_ASSERT_EQUAL(42, multiply(-6,-7));
}

void test_multiply_zero(void){
    TEST_ASSERT_EQUAL(0, multiply(999,0));
    TEST_ASSERT_EQUAL(0, multiply(0,1335));
}

void test_divide_positive_numbers(void){
    TEST_ASSERT_TRUE(0);
}

void test_divide_positive_and_negative_numbers(void){
    TEST_ASSERT_TRUE(0);
}

void test_divide_negative_numbers(void){
    TEST_ASSERT_TRUE(0);
}

void test_divide_zero(void){
    TEST_ASSERT_TRUE(0);
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_add_positive_numbers);
    RUN_TEST(test_add_positive_and_negative_numbers);
    RUN_TEST(test_add_negative_numbers);
    RUN_TEST(test_add_zero);
    RUN_TEST(test_add_overflow);
    RUN_TEST(test_add_underflow);
    RUN_TEST(test_subtract_positive_numbers);
    RUN_TEST(test_subtract_positive_and_negative_numbers);
    RUN_TEST(test_subtract_negative_numbers);
    RUN_TEST(test_subtract_zero);
    RUN_TEST(test_multiply_positive_numbers);
    RUN_TEST(test_multiply_positive_and_negative_numbers);
    RUN_TEST(test_multiply_negative_numbers);
    RUN_TEST(test_multiply_zero);
    RUN_TEST(test_divide_positive_numbers);
    RUN_TEST(test_divide_positive_and_negative_numbers);
    RUN_TEST(test_divide_negative_numbers);
    RUN_TEST(test_divide_zero);
    return UNITY_END();
}