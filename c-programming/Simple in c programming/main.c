// 1. Adding the Header Files

#include<stdio.h> // preprocessor in c programming
// 2. Global Declaration part
int sid; // sid is a int data type and it is global variable.
// (it can access through out of the programming)
// it is having default values like 
// int : 0 value
// float : 0.000000  value
// 3. main() function
void main(){
    // 3.1 Declarat ion part
    int srank; // srank is a local variable.
    // Every local variable can access within the function
    // Before access or printing we have to assign or set a value.
    // 3.2 Execution part
    sid=101;
    srank=1; // 1 value assigning into srank variable of type is int data 
    // type.so that we have to allocate only integers.
    printf("Sid=%d\n",sid);
    printf("Srank=%d",srank);
}
// 4. sub functions


// sub function
/*

    void sun(){
        // stmpt-1;
        // stmpt-2;
        // stmpt-3;
    }
*/


