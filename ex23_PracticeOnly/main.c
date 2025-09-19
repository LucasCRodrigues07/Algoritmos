#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("Under age");
        return 0;
    }else if (age >= 18 && age <= 120)
    {
        printf("Of age");
        return 0;
    }else
    {
        printf("Invalid input.");
        return 0;
    }
}