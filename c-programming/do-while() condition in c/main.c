/*
do-while() condition:
---------------------

Syntax:

    do{
        statements;
    }while(condition);

    --> It execute the body without checking the condition first time.
    Example:

*/
#include <stdio.h>

void main(){
    int i=1,n=5;
    do{
        printf("i=%d\n",i++);
    }while(i<=n);
}


