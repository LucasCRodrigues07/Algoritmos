#include <stdio.h>

int main(void)
{
    double base, altura, area; //programa que calcula a area do retangulo
    printf("Digite o valor da base do retangulo: ");
    scanf("%lf", &base);
    printf("Digite o valor da altura do retangulo: ");
    scanf("%lf", &altura);
    area = base*altura;
    printf("Area do retangulo: %.2lf", area);
    return 0;
}