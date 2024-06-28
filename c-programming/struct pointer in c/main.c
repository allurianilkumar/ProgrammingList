// struct with pointer
#include<stdio.h>
#include<string.h>
// struct declaration
struct student{ 
  int sid; // 4 
  char sname[20]; //20
};           // total=24 
// declaration of struct variable & pointer
struct student stu1,*ptr; 
// stu1 is structure variable and *ptr is structure pointer
void main(){
    // assinging stu1 data
    stu1.sid=101;
    strcpy(stu1.sname,"MOM");
    // printing values
    printf("********** Struct Variable Output********\n");
    printf("Sid=%d\n",stu1.sid);
    printf("Sname=%s\n",stu1.sname);
    // pointer assinging
    ptr=&stu1; // pointer=&StructVariable;
    // pointer variable access
    printf("**********Pointer Output********\n");
    printf("Sid=%d\n",ptr->sid);
    printf("Sname=%s",ptr->sname);
}






