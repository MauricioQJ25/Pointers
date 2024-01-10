#include <stdio.h>

// Pointers and Arrays

// A[5], A = &A[0]

int main(){
    int A[] = {2,4,5,8,1};
    int i;
    int *p = A;
    for (int i = 0; i < 5; i++){
        printf("Address = %d\n", &A[i]);
        printf("Adress = %d\n", A + i);
        printf("value = %d\n", A[i]);
        printf("value = %d\n", *(A+i));
    }
}