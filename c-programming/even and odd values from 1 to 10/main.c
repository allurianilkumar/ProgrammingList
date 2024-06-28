#include<stdio.h>
void main(){
    int i,n;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2 == 0){
            printf("Even number is %d\n",i);
        }else{
            printf("Odd number is %d\n",i);
        }
    }
}