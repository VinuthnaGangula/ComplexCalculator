#include<stdio.h>
#include "complex_calc.h"

error_t sum(complex_no *num1, complex_no *num2, complex_no *s){
    if(num1==NULL || num2==NULL){
        return NULL_PTR_ERROR;
    }
    s->real = num1->real + num2->real;
    s->imaginary = num1->imaginary + num2->imaginary;
    return SUCCESS;
}

error_t diff(complex_no *num1, complex_no *num2, complex_no *d){
    if(num1==NULL || num2==NULL){
        return NULL_PTR_ERROR;
    }
    d->real = num1->real - num2->real;
    d->imaginary = num1->imaginary - num2->imaginary;
    return SUCCESS;
}

error_t mul(complex_no *num1, complex_no *num2, complex_no *m){
    if(num1==NULL || num2==NULL){
        return NULL_PTR_ERROR;
    }
    m->real = (num1->real * num2->real)-(num1->imaginary * num2->imaginary);
    m->imaginary = (num1->real * num2->imaginary)+(num1->imaginary * num2->real);
    return SUCCESS;
}

error_t div(complex_no *num1, complex_no *num2, complex_no *d){
    if(num1==NULL || num2==NULL){
        return NULL_PTR_ERROR;
    }
    if(num2->real == 0 && num2->imaginary == 0){
        return DIV_BY_ZERO_ERROR;
    }
    d->real = (((num1->real * num2->real)-(num1->imaginary * num2->imaginary))/((num2->real * num2->real)+(num2->imaginary * num2->imaginary)));
    d->imaginary = (((num1->real * num2->imaginary)+(num1->imaginary * num2->real))/((num2->real * num2->real)+(num2->imaginary * num2->imaginary)));
    return SUCCESS;
}
