/* This program shows how to implement a quick sort algorith */

#include<stdio.h>

void quickSort(int [], int length);
void quickSort_rec(int[], int low, int high);
int getIndex(int[],int low, int high);
void swapp(int* a, int* b);
void printArray(int [], int lenght);
int main(){
    int array[11] = {4,2,3,5,4,5,5,2,10,11,6};
    printArray(array, 11);
    quickSort(array, 11);
    printArray(array, 11);
    return 0;
}

void printArray(int array[], int lenght){
    for(int i = 0; i < lenght; i++){
        printf("%d ", array[i] );
    }
    printf("\n");
}

void quickSort(int array[], int length){
    quickSort_rec(array, 0, length - 1);
}

void quickSort_rec(int array[], int low, int high){
    if (low < high){
        int index = high;
        index = getIndex(array, low, index);
        quickSort_rec(array, low, index - 1);
        quickSort_rec(array, index + 1, high);
    }
}

void swapp(int* a, int* b){
    int  temp = *a;
    *a = *b;
    *b = temp;
}

//                    j
// 0 2 2 3 4 5 4 3 7 [3]
//       i

int getIndex(int array[], int low, int high){
    //int pivote = array[high]
    int i = low;
    for (int j = low ; j < high; j++){
        if(array[j] < array[high]){
            swapp(&array[j], &array[i]);
            i++;
        }
    }
    swapp(&array[i], &array[high]);
    return i;
}