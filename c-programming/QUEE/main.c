#include <stdio.h>
#include <stdlib.h>
 
// A Linked List Node
struct Node
{
    // integer data
    int data;         
          // pointer to the next node
    struct Node* next;
}*rear = NULL, *front = NULL;
 
// Utility function to allocate the new queue node
struct Node* newNode(int item){
    // allocate a new node in a heap
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));

    if (node != NULL){
        node->data = item;
        node->next = NULL;
        return node;
    }else {
        printf("\nHeap Overflow");
        exit(EXIT_FAILURE);
    }
}
 
// dequeue the front element
// delete at the beginning
int dequeue(){
    if (front == NULL){
        printf("\nQueue Underflow");
        exit(EXIT_FAILURE);
    }
 
    struct Node* temp = front;
    printf("Removing %d\n", temp->data);

    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }
    int item = temp->data;
    free(temp);
    return item;
}
 
// Utility function to add an item to the queue
void enqueue(int item){
    struct Node* node = newNode(item);
    printf("%d\n", item);

    if (front == NULL){
        front = node;
        rear = node;
    }
    else {
        rear->next = node;
        rear = node;
    }
}
 
// top element in a queue
int peek(){
    if (front != NULL) {
        return front->data;
    }
    else {
        exit(EXIT_FAILURE);
    }
}
 
// is Empty check
int isEmpty() {
    return rear == NULL && front == NULL;
}
 
int main(){
    int no, ch, e;
    int value;
    printf("\n 1. i - Enqueue");
    printf("\n 2. d - Dequeue");
    printf("\n 3. e - Empty");
    printf("\n 4. t - Exit");
    
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
 
        switch (ch)
        {
        case 1:
            //printf("Enter data : ");
            scanf("%d", &no);
            enqueue(no);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printf("%d",isEmpty());
            break;
        case 4:
            printf("Terminating from programm");
            exit(0);
            break;
        default :
            printf(" Wrong choice, Please enter correct choice  ");
            break;
        }
    }
    return 0;
}

