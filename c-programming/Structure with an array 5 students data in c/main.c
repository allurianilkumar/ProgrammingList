// structure with an array

/*

How to declaration of the structure array.?

declaration of structure array:
-------------------------------
Syntax:
struct <StructureName>{
   member1;
   member2;
   member3;
   .
   .
   .
   memberN;
}StructureArrayName[SIZE];

        [or]

Syntax:
        struct <StructureName>{
           member1;
           member2;
           member3;
           .
           .
           .
           memberN;
        };
        struct <StructureName> ArrayName[Index];
        
Example:
        struct student stu[5]; 
        --> struct is predefined keyword.
        --> student is the structure name.
        --> stu is structure ArrayName.
        --> 5 is the size of structure Array.
*/
#include<stdio.h>
#include<string.h>
// struct declaration
struct student{ 
  int sid; // 4 
  char sname[20]; //20
};           // total=24 
// declaration of struct an array
struct student stu[5]; // here stu is an array of structure.
void main(){
    int i,n=5;
    for(i=0;i<n;i++){
        printf("Enter %d student(sid,sname):\n",i+1);
        scanf("%d",&stu[i].sid);
        scanf("%s",&stu[i].sname);
    }
    // printing values
    printf("**********5 Students Information********\n");
    for(i=0;i<n;i++){
        printf("%d) student(sid,sname): ",i+1);
        printf("Sid=%d\t",stu[i].sid);
        printf("Sname=%s\n",stu[i].sname);    
    }
}







