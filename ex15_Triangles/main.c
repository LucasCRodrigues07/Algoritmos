#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter the value of the sides of the triangle: \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        int triangle = (a == b) + (b == c) + (a == c);
        int isRight = (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a);
        switch (triangle) {
        case 3:
            printf("Equilateral triangle.\n");
            break;
        case 1:
            if (isRight)
                printf("Right and Isosceles triangle.\n");
            else
                printf("Isosceles and not a right triangle.\n");
            break;
        case 0:
            if (isRight)
                printf("Right and Scalene triangle.\n");
            else
                printf("Scalene and not a right triangle.\n");
            break;
        }
    } else {
        printf("Invalid triangle.\n");
    }
    return 0;
}