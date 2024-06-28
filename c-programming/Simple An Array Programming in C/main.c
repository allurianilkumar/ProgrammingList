#include <stdio.h>

void main()
{
    // 2 D declaratin of an Array
    int a[2][2],r,c;
    // initialization of an Array
    int b[2][2]={
        {1,2},
        {3,4}
    };
    // A Array
    printf("Enter 4 Values for 2D A Array:\n");
    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
            scanf("%d",&a[r][c]);
        }
    }
    // A Array Prining
    printf("Showing 2D A Array 5 values:\n");
    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
            printf("%d\n",a[r][c]);
        }
    }
    // B Array Printing
    printf("Showing 2D B Array 5 values:\n");
        for(r=0;r<2;r++){
            for(c=0;c<2;c++){
                printf("%d\n",b[r][c]);
            }
        }
}


