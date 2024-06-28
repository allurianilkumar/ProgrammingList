#include <stdio.h>

void main(){
    // 2D Array
    // Initialization of an 2D Array
    int r,c,rowSize=2,columnSize=2;
    // A Matrix
    int a[2][2]={
                    {1,2},
                    {3,4}
                };
    // B Matrix
    int b[2][2]={
                {1,2},
                {3,4}
            };
    // sum Matrix
    int sum[2][2];
    // printing the 2D Array with for loop
    // Adding A+B Matrix
    printf("\nA Matrix(2X2) as follow\n");
    for(r=0;r<rowSize;r++){
        for(c=0;c<columnSize;c++){
            //printf("%d\t",a[r][c]+b[r][c]); // 0=row,0=column        
            sum[r][c]=a[r][c]+b[r][c];
        }
    //   printf("\n");
    }
    
    // printing C Matrix
    for(r=0;r<rowSize;r++){
        for(c=0;c<columnSize;c++){
            printf("%d\t",sum[r][c]);
        }
        printf("\n");
    }
    
    
}



