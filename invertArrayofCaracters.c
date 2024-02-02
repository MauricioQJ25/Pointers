/*
    program: invertArrayofCharacters.c
    author: Mauricio QJ

    This program shows how to invert and array of characters provided by de user
*/

#include<stdio.h>

void invertString(char* stringk){
    int index = 0;
    while((char)*stringk != '\0'){
        stringk++;
        index++;
    }
    for(int i = index+1; i > 0; i--){
        printf("%c", *stringk--);
    }
    printf("\nInverted\n");
    return;
}

int main(void ){

    char string[100];

    printf("Enter your string: \n");
    scanf("%s", string);
    printf("You enter: %s\n", string);
    invertString(string);
    
    return 0;
}