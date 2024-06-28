/*

Variable:
    name
    assign a value(Holdes)
    update a value( varing)
    memory
    address 
    address indicate with '&'


Examples:

1) int a; // a is variable
2) int sum=0;// sum is variable
3) int rank=101; // rank is variable

Rules:

1) Space not allowed
    Ex1:    
        int first rank; (X)
        int firstRank;(✓ )
2) First letter must be start from alphabet and next letter 
start may be alphabet or number.
Examples:
        int firstName; (✓ )
        int 1firstName; (X)
        int firstName1; (✓ )
3) Do not match with keyword name
        int int;(X)
        int float;(X)
        int char(X)
4) Do not use any special characters except '_' symbol.
Examples:
        int first+Rank;(X)
        int first_Rank;(✓ )
        int _first_rank;(✓ )
5) variable length must be <= 32 characters.


variable Declaration:

Two parts:

A) Declaration of variable:
--------------------------

1) Syntax:     
            DataType  variable;
            Ex: int a; // here a is variable,it holds only int type.
2) Syntax:     
            DataType  variable1,variable2,... variableN;
            
            Ex: int a,b,c; // here a,b and c are variables.
            // Here variables seperated with ',' operator.

B) Initialization of variable: here used "=" symbol.
-----------------------------

1) Syntax:     
            DataType  variable=value;
            
            Ex: int a=101; // here a is variable, assigned 101

2) Syntax:  
            DataType  variable1,variable2, ... variableN;
            
        Ex:
            int a=101;
            int a=1,b=2,c=3; // here a,b and c are variables,a=1,b=2 and c=3.
*/

// Adding the header file.
#include<stdio.h>
// Every programme start with void main() function.
void main(){
    // Declaration of the variable
    int a,b;
    // Initialization of the variable
    int sum=0;
    // Assigning the a=10 & b=20
    a=10;
    b=20;
    // printing a and b values
    printf("A=%d\n",a);
    printf("B=%d\n",b);
    // printf("A=%d\nB=%d\n",a,b);
    // Calculating sum=a+b;
    sum=a+b;
    // print the sum variable
    printf("sum=%d",sum);
    //printf("A=%d\nB=%d\nsum=%d",a,b,sum);
}

