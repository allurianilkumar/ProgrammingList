/******************************************************************************
sizeof(): To print the size of the memory of data type

Syntax:

    int sizeof(Data-Type)
    
*******************************************************************************/
#include <stdio.h>

void main()
{
    printf("int : %d\n",sizeof(int));
    printf("long : %d\n",sizeof(long));
    
    printf("char : %d\n",sizeof(char));
    printf("float : %d\n",sizeof(float));
    printf("double : %d\n",sizeof(double));
    
}
