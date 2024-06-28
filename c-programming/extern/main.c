/******************************************************************************
extern:
-------
extern is  predefined keyword.
extern variable declare once 
assign the value at inside or outside the function 
You can access anyware.

*******************************************************************************/
#include <stdio.h>
//extern int i; // global declaration: have a default values
// Ex: int => 0, float => 0.000000, 

void main(){
    // Local declaration
    extern int i;
    printf("i=%d",i);
}
i=100;






