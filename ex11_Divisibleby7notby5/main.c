#include <stdio.h>

int main(void)
{
    for (int i = 100; i <= 300; i++)
        if (i % 7 == 0 && i % 5 != 0)
            printf("%d ", i);
    return 0;
}
