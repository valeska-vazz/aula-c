#include <stdio.h>

int main(void){
    char nome[15];

    printf("Digite seu nome: \n");
    scanf("%s" &nome);
    
    printf("Olá %s", nome);
    return 0;
}