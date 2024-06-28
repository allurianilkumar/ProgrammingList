// pointer to Double pointer Example.
#include <stdio.h>
void main(){
    // initialization of variable
    int n=10;
    // declaration of pointer
    int *p; // p is a pointer
    int **pp; // pp is pointer
    printf("\nn=%d",n); // 10 
    printf("\nn=%X",&n); //
    // holds a address of another variable
    p=&n; // assining variable to pointer
    pp=&p; // assining point to point 
    // address
    printf("\nAddress of p=%X",p);
    printf("\nAddress of pp=%X",pp);
    // vlue
    printf("\nValue of *p=%d",*p);
    printf("\nValue of **pp=%d",**pp);
}







