/*
    Program: main.c
    Author: Mauricio Quijada
    Description: This program shows how to use main.c argc and argv
*/

#include<stdio.h>


int main(int argc, char** argv){
    printf("This program shows how to use argc and argv in the main function \n");
    for (int i = 0; i < argc; i++){
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    printf("\n");
    return 0;
}