#include <stdio.h>

int main(void)
{
    int num;
    printf("Digite um numero para ver sua tabuada: \n");
    scanf("%d", &num);
    printf("A tabuada de %d eh:\n", num);
    for (int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}