#include <stdio.h>

int main(){
    int num1;
    int num2;
    int res;

    printf("Type some number: ");
    scanf("%d", &num1);
    printf("Type the second one: ");
    scanf("%d", &num2);
    
    res = num1 + num2;
    printf("The result is: %d \n", res);
    
    return 0;
}