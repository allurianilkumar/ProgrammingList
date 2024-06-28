// An Array

#include <stdio.h>

void main(){
    /*
    A)  Declaration of an 1D Array
    Syntax: <datatype> ArrayName[SIZE];
    */
    int a[5]; // 5 values can assign into "a" an array.
    // array "a" allocated a 4 bytes * 5 = 20 Bytes of memory allocated by c.
    // every array assign via index values
    // every index start from 0 value.
    // Array Assigning 5 values via index
    a[0]=101; // 0 is index value & 101 is value
    a[1]=102;
    a[2]=103;
    a[3]=104;
    a[4]=105;
    // printing array values with index 
    printf("a[%d]=%d\n",0,a[0]);// 0 is a index 
    printf("a[%d]=%d\n",1,a[1]);// 1 index
    printf("a[%d]=%d\n",2,a[2]);// 2 index
    printf("a[%d]=%d\n",3,a[3]);// 3 index
    printf("a[%d]=%d\n",4,a[4]);// 4 index
    // **** last index = size-1
}



