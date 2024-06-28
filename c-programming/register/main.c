/*

register:
---------
--> register is a predefined keyword
--> register is existexd in storage Clauses.
--> Mostly used for increase a speed in looping conditions
because of register near to memory.

*/
#include <stdio.h>

void main()
{
    register long i;
    for(i=0;i<=1000000;i++){
        printf("\ni=%d",i);
    }
}







