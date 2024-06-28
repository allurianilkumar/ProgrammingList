// w.a.p to check the given number is prime or not
#include "stdio.h"
void main(){
    int n,i=1,remCount=0;
    printf("Enter n:");
    scanf("%d",&n);
    while(i<=n){
        if(n%i == 0)
            remCount++; //remCount=remCount+1
        i++;
    }
    if(remCount == 2){
        printf("Prime number=%d",n);
    }else{
        printf("Not Prime number=%d",n);
    }

}