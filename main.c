#include<stdio.h>
#include "complex_calc.h"

int main(){
    complex_no a, b, result;
    int ch;
    scanf("%f %f", &(a.real), &(a.imaginary));
    scanf("%f %f", &(b.real), &(b.imaginary));
    printf("Enter 1.Sum 2. Diff 3.Mul 4.Div\n");
    scanf("%d", &ch);
    error_t err;
    switch(ch){
        case 1 :
        {
            err=sum(&a, &b, &result);
            break;
        }
        case 2 :
        {
            err=diff(&a, &b, &result);
            break;
        }
        case 3 :
        {
            err=mul(&a, &b, &result);
            break;
        }
        case 4 :
        {
            err=div(&a, &b, &result);
            break;
        }
        default : 
        {
            printf("INVALID\n");
            break;
        }
    }
    if(err==0){
        printf("The result is : %d + %d i", result.real, result.imaginary);
    }
    
    return 0;
}