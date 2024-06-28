/*


    // 2D Array
    A) Declaration of an 2D Array:
    ------------------------------
    Syntax: 
            <DataType> ArrayName[RowSize][ColumnSize];
     
    Example:    int a[2][2];
    
    2D Array Assignment:
    --------------------
    Syntax:
            ArrayName[RowIndex][ColumnIndex]=value;
    Example:
            a[0][0]=1;
            a[0][1]=2;
            a[1][0]=3;
            a[1][1]=4;
            
    How to print the 2D Array?
    Ans:
    Example:
            printf("%d",a[0][0]);
    Output:
            1
            
*/
    
#include <stdio.h>

void main(){
    // 2D Array
    // 1. Declaration of an 2D Array
    int a[2][2]; // total 2*2= 4 values.
    // 2. Assigning a values
    a[0][0]=1; // 0=row,0=column
    a[0][1]=2; // 0=row,1=column
    a[1][0]=3; // 1=row,0=column
    a[1][1]=4; // 1=row,1=column
    // 3. printing the 2D Array
    printf("a[%d][%d]=%d\t",0,0,a[0][0]); // 0=row,0=column
    printf("a[%d][%d]=%d\n",0,1,a[0][1]); // 0=row,1=column
    printf("a[%d][%d]=%d\t",1,0,a[1][0]); // 1=row,0=column
    printf("a[%d][%d]=%d",1,1,a[1][1]); // 1=row,1=column
}



