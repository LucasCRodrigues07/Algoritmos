#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    srand(time(NULL));

    return 0;
}