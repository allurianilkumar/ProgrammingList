#include <stdio.h>

void main(){
    // 2D Array
    // Declaration of an 2D Array
    int a[2][2],r,c;
    // assignnign a values
    // a[0][0]=1; // 0=row,0=column
    printf("Enter A Matrix 2X2:\n");
    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
            printf("Enter (%d,%d) value:",r,c);
            scanf("%d",&a[r][c]);
        }
    }
    // printing the 2D Array with for loop
    printf("\nA Matrix(2X2) as follow\n");
    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
            //printf("a[%d][%d]=%d\t",r,c,a[r][c]); // 0=row,0=column
            printf("%d\t",a[r][c]); // 0=row,0=column        
        }
       printf("\n");
    }
    
    
}



