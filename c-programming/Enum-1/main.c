#include<stdio.h>
// enum is predefined keyword
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

void main()
{
    // -:delcare a enum variable:-
    // Syntax: enum <EnumName> <Enum_Variable>;
	enum week day;
	 // enum is predefined keyword
    // week is enum name
    // day is enum variable
	day = Tue;
	printf("%d",day);
}






