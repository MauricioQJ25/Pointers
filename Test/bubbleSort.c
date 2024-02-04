/****************************************************/
// Program: bubbleSort.c 
// Description: This program implement the bubblesort algorithm
// Author: Mauricio Quijada
// Date: February 2, 2024                           
/****************************************************/

#include <stdio.h>


void bublesort(int [], int legth);
void printArray(int [], int length);
void swapp(int* a, int* b);

int main(){
    printf("This program implements the bubblesort algorithm! \n");
    int array[] = {1,2,3,400,5,10,9,8,7,6,5};
    
    printArray(array, 11);

    bublesort(array, 11);
    printArray(array, 11);
    return 0;
}

void printArray(int A[], int length){
    for(int i = 0; i < length; i++)
    {
        printf("array[%d] = %d \n", i, A[i]);
    }
    printf("\n");
    return;
}

void swapp(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//  i   0  -  (n - 1 - j)
//  1,2,3,4,5,
//  j  0 (n - j) 
// A[i] > A [i + 1] : swapp ? nothing

void bublesort(int A[], int length){  
   int i = 0, j = 0;
   for ( j  = 0; j < length - 1; j++){
    for (i = 0; i < length - 1 - j; i++){
        if (A[i] > A[i+1]){
            swapp(&A[i], &A[i+1]);
        }
    }
   }
}