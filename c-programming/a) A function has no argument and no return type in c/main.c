// a) A function has no argument and no return type
#include<stdio.h>
// function declaration
void bDay();
/*
    --> void is a return type
    --> bDay(arguments) is a function name
    --> It has no arguments.
*/


// function body or function defination or function implemenaton
// called function
void bDay(){
    printf("Happy Birthday!!!\n");
}

void main(){
    printf("Start\n");
    // function calling or calling function
    bDay();
    printf("\nEnd");
}




