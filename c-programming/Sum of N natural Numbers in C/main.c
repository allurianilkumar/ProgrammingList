// Sum of n natural number 
#include <stdio.h>

void main(){
    int i,n,sum=0;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
     sum=sum+i; // sum+=i
    }
    printf("Sum of n natural number is %d",sum);
}



