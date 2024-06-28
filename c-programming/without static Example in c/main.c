/******************************************************************************
static:
--> static is predefined keyword.
--> used before the variable(Declaration/Initialization).
--> static is fixed value means no Redeclaration/Reinitialize.


*******************************************************************************/
#include <stdio.h>

void main()
{
    // Infinity loop
    static int i=1; // Reinitialize "i" variable => auto int i=1;
    //int i=1; // auto keyword for reinitialize
    if(i<=10){
        printf("i=%d\n",i++);
        main(); // calling function
    }
}




