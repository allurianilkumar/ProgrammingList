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
public class Main
{
	public static void main(String[] args) {
	    int choice; // declaration of variable
        choice=10;
        // switch() case
        switch(choice){
            case 1:
                    System.out.println("CSE Branch");
                    break;
            case 2:
                    System.out.println("IT Branch");
                    break;
            case 3: 
                    System.out.println("ECE Branch");
                    break;
            default:
                    System.out.println("Plz select the any case from 1 to 3");
        }
	}
}
