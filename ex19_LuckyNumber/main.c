#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int num = (rand() % 5) + 1;
    int prediction;
    printf("What is your prediction? \n");
    scanf("%d", &prediction);
    if (prediction == num)
    {
        printf("Your prediction is correct.\n");
    }else
    {
        printf("Your prediction is incorrect.\n");
    }
    printf("%d", num);
    return 0;
}