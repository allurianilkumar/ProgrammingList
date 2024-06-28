// B) A function has arguments & no return type
#include<stdio.h>
// function declaration
void bDay(int);

// function body or defination or implemenaton
// called function
void bDay(int gift){ // gift is formal arguments or temp. arguments
    printf("Happy Birthday!!!\n");
    printf("My gift is %d/- Rs\n",gift);
}

void main(){
    int gift=1000;
    printf("Start\n");
    // calling function
    bDay(gift); // here gift is actual arguments
    printf("End");
    
}


