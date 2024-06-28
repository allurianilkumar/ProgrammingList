
#include <stdio.h>
// Every Global declartion having default values.
int std;
float price;
char gender;
char name[];
void main(){
    printf("Std=%d\n",std); // 0
    printf("Price=%f\n",price); // 0.000000
    printf("Gender=%c\n",gender); // 1 space
    printf("Name=%s\n",name); // space
    
}
