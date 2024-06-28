/*
printf(): function:
-------------------
    It is printing function.
    Syntax1:
        
        int printf("Constant Stream");
        
        --> int is return type.
        --> printf() is a predefined function.
        --> Constant Stream is one of the string.
     
    Example:
            printf("MOM");
    Output:
            MOM
    
    Syntax2:
    
        To print the values/variables/Constant values etc.
            
    Syntax-2:
    
        int printf("Data type formats",value/variables);
        
        --> int is return type.
        --> printf() is a predefined function.
        --> variables store the value and having data type formats
    
    Data Types formats:
    --------------------
        --> int = %d
        --> float = %f
        --> char = %c
        --> String = %s
        --> Address = %X or %u
    

Example:

        1) printf("%d",101); // 101
        2) printf("%c",'M'); // M
        3) printf("%s","MOM"); // MOM
        4) printf("%f",100.1234); // 100.123400

*/
#include<stdio.h>
void main(){
    printf("MOM IT Solutions\n"); // MOM IT Solutions
    printf("\"MOM IT Solutions\"\n"); // "MOM IT Solutions"
    printf("\'MOM IT Solutions\'\n"); // 'MOM IT Solutions'
    printf("\\MOM IT Solutions\\\n"); // MOM IT Solutions
    printf("%d\n",101); // 101
    printf("%c\n",'M'); // M
    printf("%s\n","MOM"); // MOM
    printf("%f\n",100.1234); // 100.123400
    printf("%.2f\n",100.1234); // 100.12
}

