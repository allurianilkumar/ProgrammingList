/*

switch() case:
    It is mostly used for selecting a one item or case
    from multiple cases or items.
    
    if it is not matched then automatically
    executed the default case or option.

Syntax:

switch(choice){
    case lable1:
            ----------;
            break;
    case lable2:
            ----------;
            break;
    case lable3:
            ----------;
            break;
    case lable4:
            ----------;
            break;
    .
    .
    .
    default:
            ----------;
}

--> Here case, default and break are predefined keywords.
--> If the choice is not match with any case,
 at that time executed the default option.
--> The choice is must be int or char datatype.
    & case lables also be must be int or char datatype.
---> Choice not be float data type & string also.

*/
#include <stdio.h>

void  main(){
    char choice; // declaration of variable
    printf("Enter choice(a to c):");
    scanf("%c",&choice);
    switch(choice){
        case 'a':
                printf("Apple\n");
                break;
        case 'b':
                printf("Banana\n");
                break;
        case 'c': 
                printf("Cherry\n");
                break;
        default:
                printf("Plz select the any case from 'a' to 'c'");
    }
}





