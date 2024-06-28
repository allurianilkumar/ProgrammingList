// Sum of individual digits of a number
#include <stdio.h>
void main(){
    int n,sum=0;
    printf("Enter N:");
    scanf("%d",&n);
    while(n!=0){
        sum=sum+n%10;
        n=n/10;
    }
    printf("sum of individual digits of number is %d",sum);
    
}



