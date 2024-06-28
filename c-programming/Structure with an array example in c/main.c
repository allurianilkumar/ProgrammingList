/*

Structure:
-----------

Structure can handle more than on member.

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
            int sid; // 4 bytes
            char sname[10]; // 1*10= 10 Bytes 
        };
        total memory = 14 Bytes

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
            int sid; // 4 bytes
            char sname[10]; // 1*10= 10 Bytes 
        }s1,s2;
        ---> s1 and s2 are structure Variable.
        --> s1 has 14  Bytes of memory.
        --> s2 has 14 Bytes of memory.
        total memory = 14 Bytes


How to create a structure Variable?
Ans:

Syntax:
    struct <StructureName> <structureVariable1>,<structureVariable2> ...;
Example:
    struct Student s1,s2; 
    ---> struct is predefined keyword.
    --> s1 & s2 are structure Variables.
    --> s1 is 14 Bytes of memory.
    --> s2 is 14 Bytes of memory.

*/


// structure with an array
#include<stdio.h>
#include<string.h>
// struct declaration
struct student{ 
  int sid; // 4 
  char sname[20]; //20
};           // total=24 
// declaration of struct an array
struct student stu[10]; // to assign 10 students
void main(){
    // every index start from 0 values
    stu[0].sid=101;
    strcpy(stu[0].sname,"MOM");
    // printing values
    printf("********** Student -1 via Array[0] Output********\n");
    printf("Sid[0]=%d\n",stu[0].sid);
    printf("Sname[0]=%s\n",stu[0].sname);
    
    
    // every index start from 0 values
    stu[1].sid=102;
    strcpy(stu[1].sname,"IT");
    // printing values
    printf("********** Student -2 via Array[1] Output********\n");
    printf("Sid[1]=%d\n",stu[1].sid);
    printf("Sname[1]=%s\n",stu[1].sname);
}







