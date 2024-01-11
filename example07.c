// Pointers and Multidimensional Arrays

#include <stdio.h>

int main(){

    int C[3][2][2] ={   
                        {{1, 2}, { 3, 4}},
                        {{5, 6}, { 7, 8}},
                        {{9,10}, {11,12}}
                    };
    printf("Size of int %ld", sizeof(int));
    printf("%d %d %d %d\n", C, *C, C[0], &C[0][0]);
    printf("%d\n", *(C[0][0]+1));
}