// Struct pointers

#include <stdio.h>

typedef struct {
    char * name;
    int size;
    int lenght;
    int quantity;
    int price;
} treasers;

void printJ(treasers *pJ){
    int total = pJ->price * pJ->quantity;
    printf("The total is %d\n", total);
}

int main(){
    treasers jeans = { "Jeans", 34, 32, 2, 51};
    treasers *jeansp = &jeans;
    printJ(jeansp);
    return 0;
}