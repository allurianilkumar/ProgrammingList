/******************************************************************************

Syntax:

    LableName:
     -------------
     -------------
    goto LableName;
    --------------
    --------------
    --------------

Examples:

    
    hello:
    printf("HI");
    
    goto hello;
    printf("Hello MOM");
    
    Output:
    HIHIHIHIHI...



*******************************************************************************/
#include <stdio.h>

void main(){
    mom:
    printf("HI");
    goto mom;
    printf("Hello MOM");
}





