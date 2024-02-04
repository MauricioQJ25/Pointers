/*
    program: factorial.c
    author: Mauricio Quijada
    Description: This programs calculate the factorial of a given number
*/

#include<stdio.h>

int factorial(int);

int main(void){
    int input;
    printf("Please provide a number: ");
    scanf("%d", &input);
    int fact = factorial(input);
    printf("The factorial is = %d \n", fact);
    return 0;
}

int factorial(int input){
    if(input == 0 || input == 1){
        return 1;
    }
    return (input * factorial(input - 1));
    
}
