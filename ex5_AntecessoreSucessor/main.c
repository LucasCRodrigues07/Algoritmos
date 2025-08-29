#include <stdio.h>

int main(void)
{
    int x, soma, soma1;  //programa para verificar sucessor e antecessor
    printf("Digite um número para verificar seu sucessor e antecessor: ");
    scanf("%d", &x);
    soma = x - 1;
    soma1 = x + 1;
    printf("O antecessor de %d é %d e o sucessor é %d", x, soma, soma1);
    return 0;
}