#include <stdio.h>

int main(void)
{
    int num;
    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &num);
    num = num * 1;
    printf("A tabuada do numero digitado eh %d", num);
    return 0;
}