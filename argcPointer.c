// Example to show how it works argc **

#include <stdio.h>

int main(int argc, char **argv)
{
    printf("This program shows how to use argc and argv**\n");
    for (int i = 0; i < argc; i++){
        printf("%s \n", argv[i]);
    }
    return 0;
}