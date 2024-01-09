#include <stdio.h>

// TypeCasting a pointer
int main(){
    int a = 1025;
    int *p;
    p = &a;
    printf("Size of an integer is %d", sizeof(int));
    printf("Address = %d, value = %d\n", p, *p);
    printf("Address = %d , value = %d \n", p+1, *(p+1));
    char *p0;
    p0 = (char *)p; //typecasting
    printf("size of char is %d bytes \n", sizeof(char));
    printf("Address = %d, value %d \n", p0, *p0);
    printf("Address = %d, value %d \n", p0+1, *(p0+1));
    // 1025
    /// 00000000 00000000 00000100 00000001
    return 0;
}