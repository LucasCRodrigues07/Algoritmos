#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 100

// exercicio chato pois envolve teoria de buffer e foi feito com auxilio do ChatGPT. Toda teoria compreendida*

bool belongs(int set[], int size, int element)  //we need to create the fuction out of the main and then call it on main.
{
    for (int i= 0; i < size; i++) // this is to create the set, u can use with any set
    {
        if (set[i] == element)
        {
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    int A[MAX] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int x;
    char buffer[100];
    char *endptr;
    printf("Set A: {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}\n");
    printf("Enter one number to check if it belong to the set: \n");

    if (fgets(buffer, sizeof(buffer), stdin) != NULL)

    {
        x = strtol(buffer, &endptr, 10);  //we need to check the conversion here, for that, we use if with logical operators.
        if (endptr == buffer || (*endptr != '\n' && *endptr != '\0'))  //isso envolve a memória alocada no fgets que, no final da linha coloca '\n' como caractere especial(enter), se o usuario digitou outro caractere na linha, o compilador vai identificar que há uma entrada invalida e encerrara o programa. \0 eh o terminal, se caso a entrada eh feita a partir de um arquivo onde nao há \n.
        {
            printf("Invalid input\n");
        }else
        {
            if (belongs(A, sizeA, x))
            {
                printf("True\n");
            }else
            {
                printf("False\n");
            }
        }
    }
    return 0;
}