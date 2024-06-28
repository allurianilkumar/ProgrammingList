// for(;;) loop example
#include<stdio.h>
void main(){
   int i,n=5,sum=0;
   for(i=1;i<=n;i++){
       sum=sum+i;
       printf("%d loop sum=%d\n",sum);
   }
   printf("sum of %d natural number is %d",n,sum);
}