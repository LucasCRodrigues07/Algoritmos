#include <ctype.h>
#include <stdio.h>

int main(void)
{
    double nota1, nota2, nota3, media; //media aritmetica de 3 notas
    printf("digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("digite a segunda nota: ");
    scanf("%lf", &nota2);
    printf("digite a terceira nota: ");
    scanf("%lf", &nota3);
    media = (nota1 + nota2 + nota3)/3;
    printf("media = %.2f", media);
    return 0;
}