/*
Syntax:
    while(){
        -------
        -------
        while(){
        ---------
        ---------
        }
        ---------
        ---------
    }
    
*/
#include <stdio.h>

void  main(){
    int i,j,n=5;
    i=1;
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
