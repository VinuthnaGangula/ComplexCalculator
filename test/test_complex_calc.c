#include "unity.h"
#include "unity_internals.h"
#include "complex_calc.h"

complex_no num1={0,0};
complex_no num2={0,0};
complex_no res={0,0};

void setUp(void){}
void tearDown(void){}

void test_sum(void){
    TEST_ASSERT_EQUAL(SUCCESS, sum(&num1,&num2,&res));
    TEST_ASSERT_EQUAL(0, res.real);
    TEST_ASSERT_EQUAL(0, res.imaginary);

    num1.real=-1;
    num1.imaginary=-1;

    num2.real = 1;
    num2.imaginary=1;
    TEST_ASSERT_EQUAL(SUCCESS, sum(&num1,&num2,&res));
    TEST_ASSERT_EQUAL(0, res.real);
    TEST_ASSERT_EQUAL(0, res.imaginary);
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_sum);

    return UNITY_END();
}