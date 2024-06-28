// n! value 
#include <stdio.h>

void main(){
    int i,n,fact=1;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
     fact=fact*i; // fact*=i
    }
    printf("%d!=%d",n,fact);
}



