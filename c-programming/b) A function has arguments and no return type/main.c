// B) A function has arguments with no return type
#include<stdio.h>
// function declaration
void bDay(int);
/*
    1. void is a return type
    2. bDay is a function name
    3. (int) is arguments of type is int data type.
*/
// function body or defination or implemenaton
// gift is temp. arguments
void bDay(int gift){ // here gift is formal arguments or temp. arguments
    printf("Happy Birthday!!!\n");
    printf("My gift is %d",gift);
}

void main(){
    int gift=1000;
    printf("Start\n");
    // calling function
    bDay(gift); // here gift is actual arguments.
    printf("\nEnd");
}





