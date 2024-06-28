#include<stdio.h>
void main(){
    int a=10,b=20,sum=0;
    sum=a+b;
    printf("Sum=%d",sum);
    printf("\nSum=%d",(a+b));
    printf("\nEnter A and B values:");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\nA=%d",a);
    printf("\nB=%d",b);
    printf("\nEnter A and B values:");
    scanf("%d%d",&a,&b);
    printf("\nA=%d\tB=%d",a,b);
}

