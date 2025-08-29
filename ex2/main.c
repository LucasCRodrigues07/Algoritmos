#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    int soma = num1 + num2;
    printf("O resultado da soma eh: %d", soma);
    return 0;
}