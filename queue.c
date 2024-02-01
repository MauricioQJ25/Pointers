/*
    Program: Queue.c

    It shows how to create a queue add elements and pop elements
    This program shows how to queue and dequeue
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int value;
    struct node* next;
} node; 


//                     Last element      
// A -> B -> C -> D -> E -> P -> NULL
// Head
// ptr

node * createnode(int input){
    node* newnode = (node *)malloc(sizeof(node));
    if(newnode != NULL){
        newnode->value = input;
        newnode->next = NULL;
    }
    return newnode;
}

node* enqueue(node* head, int value){
    node* ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    node* newnode = createnode(value);
    ptr->next = newnode;
    return head;
}

node* dequeue(node *head){
    if(head == NULL){
        printf("The queue is empty\n");
        return NULL;
    }
    node* ptr = head;
    head = head->next;
    free(ptr);
    if(head == NULL){
        printf("The queue is empty\n");
    }
    
    
    return head;
}


int main(){
    printf("This program shows how to create a queue\n");

    printf("\nInsert a element with value: ");
    int a;
    node* head = (node*)malloc(sizeof(node)); 
    scanf("%d", &(head->value));
    
    head  = enqueue(head, 8);
    head  = enqueue(head, 9);
    head  = enqueue(head, 10);

    head = dequeue(head);
    head = dequeue(head);
    head = dequeue(head);
    head = dequeue(head);
    head = dequeue(head);
    /**/
    printf("The queue contains the following values: \n");
   
    if(head != NULL){
     node* ptr = head;
        while(ptr->next != NULL){
           printf("val: %d -> ", ptr->value);
           ptr = ptr->next;
        }
        printf("\n");
    }
    
    return 0;

}