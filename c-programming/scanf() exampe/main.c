/*
scanf():
 --> scanf() is a predefined function.
 --> It is existed in <stdio.h>.
 --> It is used for input purpose.
 --> Reading data from the keyboard.

Syntax:

void scanf("D.T format modes",&var1,&var2,&var3 ...&varN);

Ex1:
        int PIN;
        printf("Enter PIN:")
        scanf("%d",&PIN); // input
        printf("%d",PIN); // output

*/

#include<stdio.h>
void main(){
    // declaring a variable
    int PIN;    // char PIN[10]; --> string
    printf("Enter PIN:");
    scanf("%d",&PIN); // input: Reading data from the keyboard.
    printf("PIN=%d",PIN); // output
    printf("\nPIN Address=%X",&PIN); // variable address
}
