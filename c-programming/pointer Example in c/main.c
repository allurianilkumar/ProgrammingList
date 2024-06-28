/*
pointer:
--> name 
--> indicated *
--> assigning a address of another variable

a) Declaration of the pointer
    Syntax: DataType *PointerVariable;
    Ex: int *p;
b) Assigning  a pointer by &variable.
    Syntax: PointerVariable=&variable;
    p=&a;// "&a" is address
*/
#include <stdio.h>
void main(){
    // Initialization of variable
    int a=10;
    // Declaration of the pointer
    int *p; // p is a pointer
    printf("\nA=%d",a);
    printf("\nAddress of A=%X",&a);
    // Assigning printer variable
    p=&a; // Assigning  a pointer by &variable.
    printf("\n*P=%d",*p); // getting "a" value of a
    printf("\nAddress of p=%X",p); // address of "a" variable
    
}
