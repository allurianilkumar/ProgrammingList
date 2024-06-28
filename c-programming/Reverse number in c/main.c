// Print Reverse number
#include <stdio.h>
void main(){
    int n,rev=0,temp=0;
    printf("Enter N:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("Reverse number is %d",rev);
}


