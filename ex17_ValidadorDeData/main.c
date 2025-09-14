#include <stdio.h>

int main(void)
{
    int day, month, year;
    printf("Enter a date: ");
    scanf("%d %d %d", &day, &month, &year);
    if (day < 1 || day > 31 || month < 1 || month > 12) {
        printf("Invalid date\n");
    }
    // Check leap year
    else if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("Valid date and leap year\n");
    } else {
        printf("Valid date and not a leap year\n");
    }
    return 0;
}