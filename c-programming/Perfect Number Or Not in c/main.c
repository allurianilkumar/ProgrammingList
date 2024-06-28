// Perfect Or Not Ex:6,28, 496, and 8128 are Perfect numbers
#include <stdio.h>
void main(){
    int i,n,sum=0;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
     if(n%i==0){
        sum+=i;// sum=sum+i;
     }
    }
    if(n==sum){
        printf("Perfect Number is %d",n);
    }else{
        printf("Not Perfect Number is %d",n);
    }
}






