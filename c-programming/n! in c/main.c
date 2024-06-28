// for(;;) loop example
#include<stdio.h>
void main(){
   long i,fact=1,n;
   printf("Enter n:");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
      // printf("%d\n",i);
      fact=fact*i; // 1*2 =2 =>2*3 => 6 => 6*4= 24=> 24*5 =120
   }
   printf("%d!=%d",n,fact);
}