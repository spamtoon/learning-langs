#include <stdio.h>

int main(){
    char value[4];
    FILE *f = fopen("hello.c", "r");

    fgets(value, 4, f);

    printf("You entered %s \n", value);
    return 0;
}