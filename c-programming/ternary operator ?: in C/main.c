/******************************************************************************

Ternary operator or condition operator(?:)
------------------------------------------

Syntax:
1 ) condition? truepart:falsepart;
2 ) variable = condition? truepart:falsepart;

Example:
int a=1,b=2;
a<b?printf("true"):printf("false");
output:
    true



*******************************************************************************/
#include <stdio.h>

void main()
{
    int a=2,b=4,result;
    
    a<b?printf("True"):printf("False");
    
    result=a>b?a*b:a+b;
    printf("\nResult is %d",result);
}






