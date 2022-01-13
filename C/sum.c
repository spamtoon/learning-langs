#include <stdio.h>
#define idade_al 18 


int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 100){
        printf("Voce é muito velho \n");
    }
    else if (idade >= idade_al){
        printf("Voce pode passar \n");
    }
    else {
        printf("Voce é muito novo \n");
    }

    return 0;
}