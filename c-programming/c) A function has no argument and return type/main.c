// c) A function has no arguments with return type
#include<stdio.h>
// function declaration
int bDay();

// function body or defination or implemenaton

int bDay(){
    // declaration of local variables
    int gift=1000; // gift is a local variable
    printf("Happy Birthday!!!");
    return gift; // return is a predefined keyword.
}

void main(){
    int returngift=0;
    printf("Start\n");
    // calling function
    returngift=bDay();
    printf("\nReturn gift is %d /- Rs",returngift);
    printf("\nEnd");
    
}





