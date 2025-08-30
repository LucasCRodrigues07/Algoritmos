#include <stdio.h>
#include <math.h>

int main(void)
{
    int numx2, numx3;
    double numx4, raiz;
    printf("Digite o primeiro valor a ser dobrado: ");
    scanf("%d", &numx2);
    printf("Digite o segundo valor a ser triplicado: ");
    scanf("%d", &numx3);
    printf("Digite o terceiro valor para ver sua raiz quadra: ");
    scanf("%lf", &numx4);
    numx2 = numx2 * 2;
    numx3 = numx3 * 3;
    raiz = sqrt(numx4);
    printf("O dobro de %d é %d", numx2, numx2);
    printf("%.2f", raiz);
    return 0;
}