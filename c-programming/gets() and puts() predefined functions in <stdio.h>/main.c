/******************************************************************************

gets() and puts() predefined functions in <stdio.h>

*******************************************************************************/
#include <stdio.h>

void main()
{
    // declaration of name
    char name[10];
    // printing the input
    printf("Please enter your name:");
    gets(name); // input function like scanf()
    printf("My Name is ");
    puts(name); // output function like printf()
}
