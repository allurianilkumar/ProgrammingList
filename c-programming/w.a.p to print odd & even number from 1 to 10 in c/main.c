// w.a.p to print odd & even number from 1 to 10.
#include "stdio.h"
void main(){
    int i=1,n=10;
    while(i<=n){
        if(i%2 != 0)
            printf("\nOdd Number is %d",i++);//i
        else
            printf("\nEven Number is %d",i++);//i
        //i++;
    }
}