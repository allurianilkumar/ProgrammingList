//Initialization  of an 1D Array

#include <stdio.h>

void main(){
    // B) Initialization  of an 1D Array
    // Syntax: <datatype> ArrayName[SIZE]={value1,value2,... valueN};
    int size=5;
    int index,a[5]={11,22,33,44,55}; // 5 values can assign into "a" array.
    
    // printing array values with index 
    for(index=0;index<size;index++){
        printf("a[%d]=%d\n",index,a[index]);// 0 is a index   
    }
    // **** last index = size-1
}


