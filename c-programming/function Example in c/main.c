/*

1. A function has no arguments and no return type


1. function declaration: Optional
------------------------    
    Synatax: ReturnType functionName();
    Ex:      void sum();

2.  function Implementation
            (or)
    function Body
            (or)
    function defination
----------------------------------
    Synatax: 
            ReturnType function(){
                stmpts
            }
    // called function
    Ex:     void sum(){ 
            ---------
            ---------
            ---------
            }
3. function calling or calling function
    Synatax: functionName();
    Ex:      sum(); // calling function
    --> sum is function name


*/

#include <stdio.h>
// 1.function declaration
void sum(); // it is optional
// 2. function Body or function implementation or function defination
void sum(){ // called function
    int a=10,b=20; // here a and b are local variables.
    // Every local variables can access within the funciton.
    printf("Sum=%d\n",a+b);
}
void mul(){ // called function
    int a=10,b=20; // here a and b are local variables.
    // Every local variables can access within the funciton.
    printf("Mul=%d\n",a*b);
}
void main(){
    printf("Before sum() function\n");
    // 3. calling funciton
    sum(); // calling sum() funciton
    mul(); // calling mul() funciton
    printf("After sum() funciton");
}


