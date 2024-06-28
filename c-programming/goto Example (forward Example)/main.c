/******************************************************************************

Syntax:

    goto LableName;
     -------------
     -------------
     -------------
    LableName:
    --------------
    --------------
    --------------

Examples:

    goto hello;
    printf("HI");
    hello:
    printf("Hello MOM");
    
    Output:
       Hello MOM


*******************************************************************************/
#include <stdio.h>

void main(){
    // goto is predefined keyword
    // calling the lable
    goto mom; // mom is lable
    printf("Hello World");
    // mom LableName
    mom:
    printf("MOM IT Solutions");
}





