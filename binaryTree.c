// This program shows how to create a binary tree

#include <stdio.h>
#include <stdlib.h> 

typedef struct treenode {
    int data;
    struct treenode* left;
    struct treenode* right;
} treenode;

treenode* createnode(int value){
    treenode* node = malloc(sizeof(treenode));
    if(node != NULL){
        node->data = value;
        node->right = NULL;
        node->left = NULL;
    }
}

void addTabs(int value){
    for(int i = 0; i < value; i++){
        printf("\t");
    }
    return;
} 

void printtree_rec( treenode* node , int level){
    if(node == NULL){
        addTabs(level);
        printf("---<empty>---\n");
        return;
    }
    addTabs(level);
    printf("Value: %d\n", node->data);
    addTabs(level);
    printf("Right-> \n");
    printtree_rec(node->right, level + 1);
    addTabs(level);
    printf("Left-> \n");
    printtree_rec(node->left, level + 1);
    addTabs(level);
    printf("Done\n");
}

void printtree(treenode* node ){
    printtree_rec( node , 0);
    return;
}

/*
treenode* createBalanceTree(){
    int option = 0;
    printf("Enter -1 to exit");
    printf("Enter a value: ");
    scanf("%d", &option);
    while(option != -1){
        struct root* createNode(option);        
        

    }

}
*/

treenode* invertTree(treenode* root){
    if(root == NULL){
       return NULL;
    }
    treenode *temp = root->left;
    root->left = invertTree(root->right);
    root->right = invertTree(temp);
    return root;
}


int main(void){
    printf("This program shows how to create a bynary tree\n");
 
    treenode *n1 = createnode(11);
    treenode *n2 = createnode(12);
    treenode *n3 = createnode(13);
    treenode *n4 = createnode(14);
    treenode *n5 = createnode(15);
    
    n1->right = n2;
    n1->left = n3;
    n3->right = n4;
    n3->left = n5;

    printtree(n1);
    printf("\n\n\n Inverting a TREE \n\n\n");
    invertTree(n1);
    printtree(n1);
    free(n1);
    return 0;
}
