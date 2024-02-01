/* Merge Sort Algorithm*/

#include<stdio.h>


void merge_sort(int array[], int length);
void merge_sort_recursion(int array[], int l, int r);
void merge_sort_arrays(int array[], int l, int m, int r);

int main(){
    int array[] = {5,4,2,8,9,10,1,8,7,2};
    int length = 10;
    
    for (int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    merge_sort(array, 10);
    for (int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

void merge_sort(int array[], int length){
    merge_sort_recursion(array, 0, length - 1);
}
//  0                  9
//  5,4,2,8,9,10,1,8,7,2
//           0 + 9-0/2 
//           0 + 4
// m = 4

void merge_sort_recursion(int array[], int l, int r){
    if(l < r){
       int m = l + ((r - l) / 2);
       merge_sort_recursion(array, l, m);
       merge_sort_recursion(array, m + 1, r);
       merge_sort_arrays(array, l, m, r);
    }
}
///0 - 9  0 5 9
void merge_sort_arrays(int array[], int l, int m, int r){
    
    int leftArrayLength = m - l + 1;
    int rightArrayLength = r - m;
    
    int tempLeftArray[leftArrayLength];
    int tempRightArray[rightArrayLength];
    int i, j, k;
    for(i = 0; i < leftArrayLength; i++){
        tempLeftArray[i] = array[l + i];
    }

    for(i = 0; i < rightArrayLength; i++){
        tempRightArray[i] = array[m + i + 1];
    }

 // left
 //       i
 // 1 4 7

 // left < right: copyleft ? copyright 

 //right
 //                j
 // 2 3 8 10 11 12

 // merge
 //                      k
 // i 2 3 4 7 8 10 11 12

   

    for(i = 0, j=0, k = l; k <= r; k++){
        if ((i < leftArrayLength) 
        && (j >= rightArrayLength ||(tempLeftArray[i] <= tempRightArray[j]) )){
            array[k]=tempLeftArray[i];
            i++;
        }
        else {
            array[k]=tempRightArray[j];
            j++;
        }
    }

}