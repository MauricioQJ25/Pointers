/*********************************************************/
// program: quickSort.c
// author: Mauricio QJ
// date: Feb 01, 2024
// description: This programs implement the quickSort algorithm
/*********************************************************/

#include<stdio.h>


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

// A[i] > pivote : swapp(A[j], A[i]), i++
//                                j
// 7, 8, 5, 4, 8, 5, 3, 1, 2, 3, [4]
//                   i

// j
// 7, 8, 5, 4, 8, [5]
// i
int getIndex(int A[], int l, int r){
    int i = l, j = l;
    for(i = l; i < r; i++){
        if(A[i] <= A[r]){
            swapp(&A[i], &A[j]);
            j++;
        }
    }
    swapp(&A[r], &A[j]);
    return j;
}

void quickSort_rec(int A[], int l, int r){
    if ( l < r){
        int  index = getIndex( A, l, r);
        quickSort_rec(A, l, index - 1);
        quickSort_rec(A, index + 1, r);
    }
    else {
        return;
    }
}



void quickSort(int A[], int length){
   quickSort_rec(A, 0, length);
}




int main(){
    printf("This programs implement the quickSort algorithm\n");
    
    int A[] = {7,8,5,4,1,2,3,8,5,4,3};
    int length = 11;
    printArray(A, 11);
    
    quickSort(A, 11);
    printArray(A, 11);
    return 0;
}