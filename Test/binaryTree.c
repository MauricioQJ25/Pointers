/*
    program: binaryTree.c
    Author: Maurico Quijada
    Description: In this program implemented a binary tree,
                adding nodes to the tree and print the tree.
    Date: Feb 1, 2024
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
} node;

node* insertNode(node *root,  int value){
    if (root == NULL){
        root = (node *)malloc(sizeof(node));
        if (root != NULL){
            printf("Node created succesfully\n");
        }
        root->data = value;
        root->left = NULL;
        root->right = NULL;
        return root;
    } else if( value < root->data){
        root->left = insertNode(root->left, value);
    } else if (value > root->data){
        root->right = insertNode(root->right, value);
    }
    return root;
}

void printSpaces(int level){
    int i = 0;
    while( i < level){
        printf("  ");
        i++;
    }
    return;
}

//Data: <X>
//Left:
//   Data<>
//   Left:
//   Data< >
//   Right:
//   Data< >
//Right:
//
    

void printNode(node *root, int level){
    if(root == NULL){
        return;
    }

    printSpaces(level);
    printf("Data: %d\n", root->data);

    printSpaces(level);
    printf("<Left>---:  \n");

    printSpaces(level);
    printNode(root->left, level + 1);

    printSpaces(level);
    printf("<Right>---: \n");

    printSpaces(level);
    printNode(root->right, level + 1);

    printf("\n");
    return;
}

int main(){
    printf("This program creates a binary tree \n");
    node* root = NULL;
    //root->data = 7;
    
    root = insertNode(root, 7);
    root = insertNode(root, 3);
    root = insertNode(root, 9);
    root = insertNode(root, 2);
    root = insertNode(root, 4);
    root = insertNode(root, 10);
    root = insertNode(root, 8);
    root = insertNode(root, 1);
    root = insertNode(root, 11);
    root = insertNode(root, 12);
    root = insertNode(root, 13);
    root = insertNode(root, 14);
    root = insertNode(root, 15);
    root = insertNode(root, 16);
    
    printNode(root, 0);

    return 0;

}