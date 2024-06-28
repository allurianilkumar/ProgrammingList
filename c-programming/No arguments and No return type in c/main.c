// including a library
#include<stdio.h>
// declaration of function
void gift();
// function body
// called function
void gift(){
    printf("Happy Birthday!!!\n");
}
void main(){
    printf("Before the gift()\n");
    gift(); // calling function
    printf("After the gift()\n");
}