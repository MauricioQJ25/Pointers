// This is an example of how to create a linked list
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <malloc.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *create_all(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);
struct node *sort_list(struct node *);
struct node *reverse_list(struct node *start);

int main(int argc, char *argv[]){
    printf("This is an example of how to create a linked list\n");
    int option;
    do
    {
        printf("\n\n ***** MAIN MENU *****");
        printf("\n  1: Create a list ");
        printf("\n  2: Display the list ");
        printf("\n  3: Add a node at the beggining ");
        printf("\n  4: Add a node at the end");
        printf("\n  5: Add a node before a given node");
        printf("\n  6: Add a node after a given node");
        printf("\n  7: Delete a node from the beggining");
        printf("\n  8: Delete a node from the end");
        printf("\n  9: Delete a given node");
        printf("\n 10: Delete a node after a given node");
        printf("\n 11: Delete the entire list ");
        printf("\n 12: Sort the list ");
        printf("\n 13: Reverse the list ");
        printf("\n 14: Exit");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch(option){
            case 1: start = create_all(start);
                printf("\n LINKED LIST CREATED");
                break;
            case 2: start = display(start);
                break;
            case 3: start = insert_beg(start);
                break;
                
            case 4: start = insert_end(start);
                break;
            case 5: start = insert_before(start);
                break;
                /*
            case 6: start = insert_after(start);
                break;
            case 7: start = delete_beg(start);
                break;
            case 8: start = delete_end(start);
                break;
            case 9: start = delete_node(start);
                break;
            case 10: start = delete_after(start);
                break;
            case 11: start = delete_list(start);
                break;
            case 12: start = sort_list(start);
                break;
                */

            case 13: start = reverse_list(start);
                break;
            default: 
                break;
        }   
    } while (option != 14);
    getchar();
    return 0;
}

struct node *create_all(struct node *start){
    struct node *new_node, *ptr;
    int num;
    printf("\n Enter -1 to end");
    printf("\n Enter the data : ");
    scanf("%d", &num);
    while(num != -1){
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        if (start == NULL){
            new_node->next = NULL;
            start = new_node;
        }
        else 
        {
            ptr = start;
            while(ptr->next != NULL)
            ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = NULL;
        }
        printf("\n Enter the data : ");
        scanf("%d", &num);
    }
    return start;
}

struct node *display(struct node *start){
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("\t %d", ptr ->  data);
        ptr = ptr->next;
    }
    return start;
}

struct node *insert_beg(struct node *start){
    struct node *new_node;
    int num;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = start;
    start = new_node;
    return start;
}

struct node *insert_end(struct node *start){
    struct node *ptr, *new_node;
    int num;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = NULL;
    ptr = start;
    while(ptr->next != NULL){
        ptr = ptr->next;
    } 
    ptr->next = new_node;
    return start;
}

struct node *insert_before(struct node *start){
    struct node *ptr, *new_node, *pre_ptr;
    int num, num_before;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = NULL;
    ptr = start;
    pre_ptr = start;
    printf("\n Enter the node : ");
    scanf("%d", &num_before);
    while((*ptr).data != num_before){
        pre_ptr = ptr;
        ptr = ptr->next;
    }
    pre_ptr->next = new_node;
    new_node->next = ptr;
    return start;
}

struct node *reverse_list(struct node *start){
    struct node *prevNode = NULL;
    struct node *nextNode = NULL;
    struct node *head = start;

    while (head != NULL){
        nextNode = head->next;
        head->next = prevNode;
        prevNode = head;
        head = nextNode;
    }
    head = prevNode;

    return head;
}