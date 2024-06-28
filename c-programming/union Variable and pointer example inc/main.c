// struct with an pointer
#include<stdio.h>
#include<string.h>
// union declaration
union student{ 
  int sid; // 4 
  char sname[20]; //20
};  // total= 20 
// declaration of union variable & pointer
union student stu1,*ptr; 
// stu1 is union variable and *ptr is point pointer
void main(){
    // every index start from 0 values
    stu1.sid=101;
    strcpy(stu1.sname,"MOM");
    // printing values
    printf("********** Union Variable Output ********\n");
    printf("Sid=%d\n",stu1.sid);
    printf("Sname=%s\n",stu1.sname);
    // pointer assinging
    ptr=&stu1; // pointer=&UnionVariable;
    // pointer variable access
    printf("********** Pointer Output ********\n");
    printf("Sid=%d\n",ptr->sid);
    printf("Sname=%s",ptr->sname);
}



