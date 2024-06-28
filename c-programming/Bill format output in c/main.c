#include <stdio.h>

void main(){
    // PI is fixed value  or constant variable.
    // Every constant variable shoud be write in upper case.
    float PI=3.14;
    int sid=123;
    // Showing PI value
    printf("PI=%f\n",PI); // PI=3.140000
    printf("PI=%.2f\n",PI); //PI=3.14
    printf("PI=%6.2f\n",PI);//PI=  3.14
    printf("PI=%06.2f\n",PI);//PI=003.14
    printf("SID=%d\n",sid);//SID=123  
    printf("SID=%6d\n",sid);//SID=   123
    printf("SID=%06d\n",sid);//SID=000123
}
