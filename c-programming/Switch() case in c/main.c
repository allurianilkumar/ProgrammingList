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
    int choice; // declaration of variable
    printf("Enter choice(1 to 3):");
    scanf("%d",&choice);
    switch(choice){
        case 1:
                printf("CSE Branch\n");
                break;
        case 2:
                printf("IT Branch\n");
                break;
        case 3:
                printf("ECE Branch\n");
                break;
        default:
                printf("Plz select the any case from 1 to 3");
    }
    
}




