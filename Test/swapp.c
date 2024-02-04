/*
    Program: swapp.c 
    Author: Mauricio Quijada
    Description: This program swapp a couple of integers
*/

#include<stdio.h>

void swapp(int *, int*);

int main(){
    int A = 13;
    int B = 12;
    
    printf("Before swapping the values are A: %d, B: %d\n", A, B);

    swapp(&A, &B);

    printf("After swapping the values are A: %d, B: %d\n", A, B);
    return 0;
}

void swapp(int* ptrA, int* ptrB){
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    return;
}