// Character arrays an pointers

#include<stdio.h>

void print(char *C){
    while (*C != '\0'){
        printf("%c", *C);
        C++;
    }
    printf("\n");
}

int main(){
    char Name[5] = "Mau";
    print(Name);
    char *Name2 = "Mau2";
    print(Name2);
    return 0; 
}