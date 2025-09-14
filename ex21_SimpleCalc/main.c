#include <stdio.h>

int main(void)
{
    char op;
    double num1, num2;
    printf("Enter two numbers and the operator: \n");
    scanf("%lf %lf", &num1, &num2);
    scanf(" %c", &op);
    switch (op)
    {
    case '+': printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
        break;
    case '-': printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
        break;
    case '*': printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
        break;
    case '/': printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
        break;
    }
    return 0;
}