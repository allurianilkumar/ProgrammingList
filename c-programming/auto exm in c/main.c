/*
auto:
--> auto is predefined keyword.
--> It is default option.
--> It is used before the data type for declaring the 
    variable.
--> It used for redeclaration of variable.
Example:
    1) auto int i=100; // auto is default
    2) int k=200; 
    
*/
#include <stdio.h>  
void main()  {  
    auto int  a=10;
    printf("\n%d",a);
    {
        auto int  a=20;    
        printf("\n%d",a);
        {
            auto int  a=30;    
            printf("\n%d",a);
        }
    }

}





