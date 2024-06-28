// Adding the header file for printf() and scanf() functions
#include<stdio.h>
// Every programm start from void main() function
void main(){
    int a,b; // declaration of the variable
    printf("Enter A and B:");
    scanf("%d%d",&a,&b); // reading data from the keyboard.
    printf("\nA=%d\tB=%d",a,b); // print A and B
    printf("\nA+B=%d",a+b); // print A+B
    printf("\nA-B=%d",a-b); // print A-B
    printf("\nA*B=%d",a*b); // print A*B
    printf("\nA/B=%d",a/b); // print A/B
    printf("\nA Modulo B=%d",a%b); // print A%B
}


