// conditional operator or ternary operator (?:)
#include "stdio.h"
//
void main(){
    int a=1,b=2,result;
    result= a>b? a+b : a*b ;
    printf("Result is %d",result);
}