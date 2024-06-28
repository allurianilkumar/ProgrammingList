#include <stdio.h>

void main()
{
    int i=5;
    printf("i=%d\n",i); // i=5 #5
    printf("--i=%d\n",--i); // --i=> i=i-1 => 5-1 => #4
    printf("i=%d\n",i); // i=4
    printf("i--=%d\n",i--); // i--=> i=i-1 => i=4-1=3 #4
    printf("i=%d\n",i); // i=3 #3

    
}

