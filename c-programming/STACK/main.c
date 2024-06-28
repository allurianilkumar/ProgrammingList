// including a header files
#include <stdio.h>
#include <stdlib.h>

// creating a node with struct
struct node{
    int info;
    struct node *ptr;
}*S,*S1,*temp;

// push function
void push(int data);
// pop function
void pop();
//empty function
int empty();
// display function
void display();
// creat funciton for stack
void create();
// initial count =0
int count = 0;
 
void main(){
    int no, ch, e;
    int value;
    printf("\n 1. i - Push");
    printf("\n 2. d - Pop");
    printf("\n 3. e - Empty");
    printf("\n 4. s - Dipslay");
    printf("\n 5. t - Exit");
    create();
    while (ch)
    {
        printf("\n Enter choice : ");
        scanf("%c", &ch);
        switch (ch)
        {
        case 'i':
            //printf("Enter data : ");
            scanf("%d", &no);
            push(no);
            break;
        case 'd':
            pop();
            break;
        case 'e':
            printf("%d",empty());
            break;
        case 's':
            display();
            break;
        case 't':
            exit(0);
            break;
        default :
            printf(" Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}
 
// Create empty stack
void create(){
    S = NULL;
}
 
// Push data into stack 
void push(int data){
    if (S == NULL){
        S =(struct node *)malloc(1*sizeof(struct node));
        S->ptr = NULL;
        S->info = data;
    }else{
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = S;
        temp->info = data;
        S = temp;
    }
    count++;
}
 
// Display stack elements
void display() {
    S1 = S;
    if (S1 == NULL){
        //printf("Stack is empty");
        printf("-1");
        return;
    }
 
    while (S1 != NULL){
        printf("%d ", S1->info);
        S1 = S1->ptr;
    }
 }
 
// Pop Operation on stack
void pop() {
    S1 = S;
    if (S1 == NULL){
        //printf("\n Error : Trying to pop from empty stack");
        printf("-1");
        return;
    }
    else
      S1 = S1->ptr;
    printf("\n Popped value : %d", S->info);
    free(S);
    S = S1;
    count--;
}
 // Check if stack is empty or not
int  empty() {
    if (S == NULL){
        return -1;
    }else{
        return 1;
    }
    return 0;
}
