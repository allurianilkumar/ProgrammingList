// An Array

#include <stdio.h>

void main(){
    // Initialization  of an 1D Array
    // Syntax: datatype ArrayName[SIZE]={value1,value2,... valueN};
    int index,a[5]={110,220,33,44,55},max,min; // 5 values can assign into "a" array.
    max=min=a[0];
    // printing array values with index 
    for(index=1;index<5;index++){
        if(a[index]>max){
            max=a[index];
        }
        if(a[index]<min){
            min=a[index];
        }
    }
    printf("Max=%d\n",max);
    printf("Min=%d",min);
}


