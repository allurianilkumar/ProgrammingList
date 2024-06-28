#include <stdio.h>

void main()
{
    int i=5;
    printf("i=%d\n",i); // i=5
    printf("--i=%d\n",--i); // --i=> i=i-1 => 5-1 => 4
    printf("i=%d\n",i); // i=4
    printf("i--=%d\n",i--); // i-- => i=i-1 =4-1=3 postpone to next line
    printf("i=%d\n",i); // i=3
}

