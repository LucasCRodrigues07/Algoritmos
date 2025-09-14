#include <stdio.h>

int main(void)
{
    int metro, centimetro, milimitro; //conversor de metro para centimetro e milimetro
    printf("Digite o valor da medida: ");
    scanf("%d", &metro);
    centimetro = metro * 100;
    milimitro = metro * 1000;
    printf("Convertendo %dm em centímetros: %dcm\n", metro, centimetro);
    printf("Convertendo %dm em milímetros: %dmm", metro, milimitro);
    return 0;
}