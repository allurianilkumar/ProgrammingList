/*
nested if():

Syntax:
   if(condition1){
    ------------
    ------------
        if(condition2){
        ---------------   
        ---------------
        .
        .
        .
        
        }
    ------------
    ------------
   }
    
*/
#include <stdio.h>

void  main(){
    int i=1,j=2,n=5;
    printf("1\n");
    if(i<n){
        printf("2\n");
        if(j>n){
            printf("3\n");
        }
    printf("4\n");
    }
    printf("5\n");
}






