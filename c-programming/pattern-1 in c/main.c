/******************************************************************************

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5


*******************************************************************************/
#include <stdio.h>

void main(){
    int row,column,n=5;
    for(row=1;row<=n;row++){
        for(column=1;column<=row;column++){
            printf("%d ",column);
        }
        printf("\n");
    }
}