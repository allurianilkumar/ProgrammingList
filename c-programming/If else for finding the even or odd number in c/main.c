/*
Syntax:
    if(condition){
        true part
    }else{
        false part
    }

*/
#include<stdio.h>
void main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(n%2 == 0){
        printf("Even number is %d",n);
    }else{
        printf("Odd number is %d",n);
    }
}



