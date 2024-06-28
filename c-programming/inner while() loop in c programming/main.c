/* 

Inner while() or Nexted while() Loop:
-------------------------------------
A while() contains one more while() loop.


Syntax: 

while(condition-1){ 
    ------- 
    ------- 
    while(condition-2){ 
        --------- 
        --------- 
        
    }
    --------- 
    --------- 
    
}

*/ 
#include <stdio.h>
void main(){
    int i,j,n;
    i=1;
    n=5;
    while(i<=n){
        j=1;
        while(j<=n){
            printf("i=%d j=%d\n",i,j);
            j++;
        }
        i++;
    printf("\n");
    }
}


