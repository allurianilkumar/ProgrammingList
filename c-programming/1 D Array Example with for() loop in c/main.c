// An Array

#include <stdio.h>

void main(){
    // declaration of an 1D Array
    // Size =5 
    // Syntax: datatype ArrayName[SIZE];
    int index,a[5]; // 5 values can assign into "a" array.
    // every array assign via index values
    // every index start from 0 value.
    for(index=0;index<5;index++){
        printf("Enter %d value:",index+1);
        scanf("%d",&a[index]);
    }
    // printing array values with index 
    for(index=0;index<5;index++){
        printf("a[%d]=%d\n",index,a[index]);// 0 is a index   
    }
    // **** last index = size-1
}

