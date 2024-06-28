// w.a.p to print the given number is even or odd number.
#include "stdio.h"
void main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    if(n%2==0)
        printf("Even Number is %d",n);
    else{
        printf("Odd Number is %d",n);
    }
}