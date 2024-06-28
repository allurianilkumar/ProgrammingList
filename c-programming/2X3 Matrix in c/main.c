#include <stdio.h>

void main(){
    // 2D Array
    // Initialization of an 2D Array
    int r,c,rowSize=3,columnSize=3;
    int a[3][3]={
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
                };
    
    // printing the 2D Array with for loop
    printf("\nA Matrix(2X3) as follow\n");
    for(r=0;r<rowSize;r++){
        for(c=0;c<columnSize;c++){
            //printf("a[%d][%d]=%d\t",r,c,a[r][c]); // 0=row,0=column        
            printf("%d\t",a[r][c]); // 0=row,0=column        
        }
       printf("\n");
    }
    
    
}

