// Prime Or Not Ex:3,5,7 are prime numbers
#include <stdio.h>

void main(){
    int i,n,temp=0;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=2;i<n;i++){//for(i=2;i<n/2;i++){
     if(n%i==0){
         temp++;
     } // if close
    } // for close
    if(temp==0){
        printf("Prime Number is %d",n);
    }else{
        printf("Not Prime Number is %d",n);
    }
}



