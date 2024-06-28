#include <stdio.h>  
void main()  {  
    auto int  a=10;
    {
        auto int a=20; // updated the "a" variable to 20
        {
          auto int a=30; // updated the "a" variable to 30
          printf("\n%d",a); // 30
        }
        printf("\n%d",a); // 30
    }
    printf("\n%d",a); // 30
}




