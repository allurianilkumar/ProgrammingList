/*
Syntax:
    for(;;){
        -------
        -------
        for(;;){
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
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("i=%d j=%d\n",i,j);
        }
        printf("\n");
    }

}


