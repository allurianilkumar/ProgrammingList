// d) A function has arguments with return type
#include<stdio.h>
// 1. function declaration
int bDay(int); // optional

// 2. function body or function defination or function implemenation
// called function
// mandatory
int bDay(int gift1){ // gift1 is formal or temp. arguments
    int gift=1000; // gift is a local variable
    printf("Happy Birthday!!!\n");
    return gift+gift1;
}

void main(){
    int returngift,gift=2000;
    printf("Start\n");
    // 3. calling function
    // mandatory
    returngift=bDay(gift);// gift is actual arguments
    printf("Return gift is %d",returngift);
    printf("\nEnd");
}





