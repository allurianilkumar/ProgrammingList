#include <stdio.h>
void main(){
int a[2][2],b[2][2],d[2][2],r,c;
for(r=0;r<2;r++){
    for(c=0;c<2;c++){
        printf("Enter A value:");
        scanf("%d",&a[r][c]);
    }
}
for(r=0;r<2;r++){
    for(c=0;c<2;c++){
        printf("Enter B value:");
        scanf("%d",&b[r][c]);
    }
}

for(r=0;r<2;r++){
    for(c=0;c<2;c++){
        d[r][c]=a[r][c]+b[r][c];
    }
}
printf("\nC matrix as follow.\n");
// printing 2x2 matrix values
for(r=0;r<2;r++){
    for(c=0;c<2;c++){
        printf("%d ",d[r][c]);
    }
    printf("\n");
}
}
