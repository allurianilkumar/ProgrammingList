/*

Structure:
-----------

Structure can handle more than one member.

Declaration Of structure:
------------------------
Syntax-1:

struct <StructureName>{
   member1;
   member2;
   member3;
   .
   .
   .
   memberN;
};

--> struct is predefined keyword.
--> members are different kinds of Variable declaration.

Example:
        struct Student{
            int sid; // 2 bytes
            char sname[10]; // 1*10= 10 Bytes 
        }
        total memory = 12 Bytes

Syntax-2:

struct <StructureName>{
   member1;
   member2;
   member3;
   .
   .
   .
   memberN;
}StructureVariable1,StructureVariable2,...;


Example:
        struct Student{
            int sid; // 2 bytes
            char sname[10]; // 1*10= 10 Bytes 
        }s1,s2;
        ---> s1 and s2 are structure Variable.
        --> s1 has 12  Bytes of memory.
        --> s2 has 12 Bytes of memory.
        total memory = 12 Bytes


How to create a structure Variable?
Ans:

Syntax:
    struct <StructureName> <structureVariable1>,<structureVariable2> ...;
Example:
    struct Student s1,s2; 
    ---> struct is predefined keyword.
    --> s1 & s2 are structure Variable.
    --> s1 is 12 Bytes of memory.
    --> s2 is 12 Bytes of memory.



How to Assign a structure member?
Ans:

    Syntax:
            structureVariable.member = value;
    Example:
            s1.sid=101;
            --> structure member access with the help of "." symbol


How to access/print/show a structure member?
Ans:

    Syntax:
            structureVariable.member
    Example:
            printf("%d",s1.sid);



*/


// structure with an array
#include<stdio.h>
#include<string.h>
// struct declaration
struct student{ 
  int sid; // 4 
  char sname[20]; //20
};           // total=24 
// declaration of struct Variable.
struct student stu1,stu2;
void main(){
    // Assign a struct member.
    stu1.sid=101;
    strcpy(stu1.sname,"MOM");
    // printing values
    printf("**********Variable Output********\n");
    printf("Sid1=%d\n",stu1.sid);
    printf("Sname1=%s\n",stu1.sname);
    stu2.sid=102;
    strcpy(stu2.sname,"IT");
    // printing values
    printf("**********Variable Output********\n");
    printf("Sid2=%d\n",stu2.sid);
    printf("Sname2=%s\n",stu2.sname);
}






