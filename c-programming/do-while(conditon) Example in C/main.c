//do-while() loop
/*
Syntax:
 
 do{
     // statements;
 }while(condition);
 --> It execute one time without checking
 the while() condition.
    
    
*/
#include<stdio.h>
void main(){
    int i=1;
    do{
        printf("i=%d\n",i);
        i=i+1;
    }while(i<=5);
    
}

