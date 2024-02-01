/*
    Program: sliddingwindow.c
    Author: Mauricio QJ

    This program shows how to use slidding window algorithm
*/

#include<stdio.h>



int main(void){
    printf("This program shows how to use slidding window algorithm \n");
    int n = 10;
    int array[] = { 100, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int k = 4;

    // 10 - 4 + 1 = 7
    // arrayLength  - subArrayLength + 1
    // n - k + 1
 
    // 7 * 4
    // 7


    int maxIndex = 0;
    int maxSum = 0;
    int currentIndex = 0;
    int sum = 0;
    for(int i = currentIndex; i < currentIndex + k; i++){
        sum = sum + array[i];
    }
    maxSum = sum;
    // 0 - 6 7 8 9
    while( currentIndex <  n - k ){
        int newSum = sum + array[currentIndex + k] - array[currentIndex];
        if(newSum >= maxSum){
            maxIndex = currentIndex + 1;
            maxSum = newSum;
        }
        sum = newSum;
        currentIndex++;
    }

    printf(" Max index is in the position number: %d, max sum is: %d\n", maxIndex, maxSum);

    return 0;

}