#include <stdio.h>

void main(){
    // 3D Array
    // Declaration of an 3D Array
    int r,c,d;
    int a[2][2][2]={
                    {1,2,3,4},
                    {5,6,7,8}
                    };
    // for(r=0;r<2;r++){
    //     for(c=0;c<2;c++){
    //         for(d=0;d<2;d++){
    //             printf("A[%d][%d][%d] value:",r,c,d);
    //             scanf("%d",&a[r][c][d]);
    //         }
    //     }
    // }
    printf("\n A output:\n");
    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
            for(d=0;d<2;d++){
                printf("A[%d][%d][%d] = %d\t",r,c,d,a[r][c][d]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

