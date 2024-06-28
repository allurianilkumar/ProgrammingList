// Amstrong Number 153=1^3+5^3+3^3
#include <stdio.h>
void main(){
    int n,r,sum=0,temp;
    printf("Enter N:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum == temp){
        printf("Amstrong Number is %d",sum);
    }else{
        printf("Not Amstrong Number %d",temp);
    }
    
    
}




