/*

2D Array:

B) Initialization of 2D Array:
------------------------------

Syntax:
        <DataType> ArrayName[RowSize2][ColumnSize2]={
                                                    {val1,val2},
                                                    {val3,val4}
                                                  };

Example:
        int a[2][2]={   
                        {1,2},
                        {3,4}
                    };

*/
#include <stdio.h>

void main(){
    // 2D Array
    // Initialization of an 2D Array
    int a[2][2]={
                    {1,2},
                    {3,4}
                };
    int r,c,rowSize=2,columnSize=2;
    // printing the 2D Array with for loop
    printf("\nA Matrix(2X2) as follow\n");
    for(r=0;r<rowSize;r++){
        for(c=0;c<columnSize;c++){
            printf("a[%d][%d]=%d\t",r,c,a[r][c]); // 0=row,0=column        
        }
       printf("\n");
    }
}

