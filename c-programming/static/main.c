/******************************************************************************
static:
--> It is predefined keyword.
--> used before the variable(Declaration/Initialization).
--> static is fixed value means not Declaration/Reinitialize.


*******************************************************************************/
#include <stdio.h>

void main()
{
    static int i=1; // it initialize only once
    //int i=1; // auto keyword for reinitialize
    if(i<=10){
        printf("i=%d\n",i++);
        main(); // calling function
    }
}







