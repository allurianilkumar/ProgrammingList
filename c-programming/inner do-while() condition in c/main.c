/*
Syntax:
    do{
        -------
        -------
        do{
          ---------
          ---------
        }while(condition);
        ---------
        ---------
    }while(condition);
    
*/
#include <stdio.h>

void  main(){
    int i,j,n=5;
    i=1;
    do{
        j=1;
        do{
            printf("i=%d j=%d\n",i,j);
            j++;
        }while(j<=n);
        i++;
        printf("\n");
    }while(i<=n);

}



