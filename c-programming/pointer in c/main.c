/*

pointer:

Pointer is a variable which holds the address of 
another variable.

Declaration of Pointer:
-----------------------

Syntax:
        <DataType>  *<pointerVariable>;
Example:
        int *ptr; // here *ptr is a pointer variable.
        --> pointer variable indicate with "*".

Initialization Of pointer:
--------------------------
Or Assigning a pointer:
--------------------------
Syntax:   
        pointerVariable = &variableName;
Example:
        int i=10; // "i" is a variable.
        int *ptr; // ptr is pointer variable.
        ptr=&i; // Assigning an address of variable to pointer.
*/
// Variable to Pointer Example
#include <stdio.h>
void main(){
    // Initialization of variable
    int n=10;
    // declaration of pointer
    int *ptr;
    printf("\nn=%d",n);
    printf("\nn=%X",&n);
    // holds(Assigning) a address of another variable
    ptr=&n;
    printf("\nValue of *ptr=%d",*ptr);
    printf("\nAddress of ptr=%X",ptr);
}






