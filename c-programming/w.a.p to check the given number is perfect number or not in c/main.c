// w.a.p to check the given number is perfect number or not
/*
n=6
while(i<n){
    if(n%i == 0) //6%1 ,6%2, 6%3, 6%4,6%5
    remSum+=i; //remSum=1+2+3 =6 ==>>n
}
if(remSum == n){
    print perfect number
}else{
    not perfect number
}
*/
#include "stdio.h"
void main(){
    int n,i=1,remSum=0;
    printf("Enter n:");
    scanf("%d",&n);
    while(i<n){
        if(n%i == 0) //6%1 ,6%2, 6%3, 6%4,6%5
            remSum+=i; //remSum=1+2+3 =6 ==>>n
        i++;
    }
    if(remSum == n){
        printf("Perfect number is %d",n);
    }else{
        printf("Not Perfect number is %d",n);
    }

}