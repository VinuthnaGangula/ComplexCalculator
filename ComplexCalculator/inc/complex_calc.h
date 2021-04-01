/**
 * @file complex_calc.h
 * @author Vinuthna
 * @brief 
 * @version 0.1
 * @date 2021-03-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __COMPLEX_CALC__
#define __COMPLEX_CALC__


typedef enum error_t{
    DIV_BY_ZERO_ERROR = -2,
    NULL_PTR_ERROR = -1,
    SUCCESS = 0
}error_t;


typedef struct{
    float real;
    float imaginary;
}complex_no;

/**
 * @brief 
 * 
 * @param num1 
 * @param num2 
 * @param s 
 */
error_t sum(complex_no *num1, complex_no *num2, complex_no *s);

/**
 * @brief 
 * 
 * @param num1 
 * @param num2 
 * @param d 
 * @return error_t 
 */
error_t diff(complex_no *num1, complex_no *num2, complex_no *d);

/**
 * @brief 
 * 
 * @param num1 
 * @param num2 
 * @param m 
 * @return error_t 
 */
error_t mul(complex_no *num1, complex_no *num2, complex_no *m);

/**
 * @brief 
 * 
 * @param num1 
 * @param num2 
 * @param d 
 * @return error_t 
 */
error_t div(complex_no *num1, complex_no *num2, complex_no *d);

#endif