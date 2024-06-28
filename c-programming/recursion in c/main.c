/*

Recurssion function:
--------------------
    Recurssion is a process by which a function calls it's self
    until by specified condition applied inside of the Function
    is called a Recurssion Function.
Syntax:
-------
        
        <ReturnType> FunctionName(Arguments){
            // calling function
            functionName(arguments);
        }

Example:
--------
    1)
        void sum(){
            // calling
            sum();
        }
    2) 
        void main(){
            // calling function
            main();
        }
    --> It's getting Infinity looping by Recurssion function.


*/


#include <stdio.h>
int factorial(int n){ // n is formal arguments or temp. arguments
    if(n==1){
        return 1;
    }else{
        return n*factorial(n-1); // 5*4*3*2*1
    }
}

void main(){
    int n=5;
    // calling function
    printf("%d!=%d\n",n,factorial(n)); // n is actual arguments
    printf("%d factorial is %d.",n,factorial(n)); // n is actual arguments
    
}






