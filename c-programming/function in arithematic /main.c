#include<stdio.h>

int main(){
    int a = 10, b = 2;
    int addition, subtraction, multiplication, division, modulus;
    
    addition = a + b; //addition of 2 and 10
    subtraction = a - b; //subtract 2 and 10
    multiplication = a * b; //multiplying  2 and 10
    division = a / b; //dividing 10 by 2
    modulus = a % b; //calculation the remainder
    
    printf("Addition of two numbers a, b is : %d\n",addition);
    printf("Subtraction of two numbers a, b is : %d\n",subtraction);
    printf("Multiplication of two numbers a, b is : %d\n",multiplication);
    printf("Division of two numbers a, b is : %d\n",division);
    printf("Modulus of two numbers a, b is : %d\n",modulus);
}    
    