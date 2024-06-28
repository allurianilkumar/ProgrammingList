#include <stdio.h>
void main(){
 int i=1,n=5;
 do{
     if( i==3 ){
         i=i+1;
         continue;
     }
     printf("%d\n",i);
     i=i+1;
 }while(i<=n);
}
