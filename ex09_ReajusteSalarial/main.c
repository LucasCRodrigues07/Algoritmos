#include <stdio.h>

int main(void)
{
    double salario, reajuste, salarioReajustado;
    printf("Informe seu salario: ");
    scanf("%lf", &salario);
    reajuste = salario * 0.06;
    salarioReajustado = reajuste + salario;
    printf("Percentual de reajuste: 6%%\n");
    printf("Salário com percentual de reajuste: %.2lf", salarioReajustado);
    return 0;
}