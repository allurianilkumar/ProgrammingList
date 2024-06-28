/*
nested if-else:

Syntax:
   if(condition1){
    ------------
    ------------
   }else{
        ------------
        ------------
        if(condition2){
        ---------------   
        ---------------
        }else{
            ------------
            ------------
        }
   }
    
*/
#include <stdio.h>

void  main(){
    int i=1,j=1,n=5;
    printf("1\n");
    if(i>n){
        printf("2\n");
    }else{
        printf("3\n");
        if(j>n){
            printf("4\n");        
        }else{
            printf("5\n");    
        }
        printf("6\n");
    }
    printf("7\n");
}





