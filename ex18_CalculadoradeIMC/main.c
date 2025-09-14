#include <stdio.h>

int main(void)
{
    double weight, height;
    double imc;
    printf("Enter your weight in kilograms: ");
    scanf("%lf", &weight);
    printf("Enter your height in meter: ");
    scanf("%lf", &height);
    imc = weight / (height * height);
    if (imc < 18.5)
    {
    printf("Your imc is %.2lf. Underweight", imc);
    }else if (imc > 18.5 && imc < 24.9)
    {
        printf("Your imc is %.2lf. Normal weight", imc);
    }else if(imc > 24.9 && imc < 29.9)
    {
        printf("Your imc is %.2lf. Overweight", imc);
    }else if(imc > 29.9 && imc < 34.9)
    {
        printf("Your imc is %.2lf. Overweight class I", imc);
    }else if(imc > 34.9 && imc < 39.9)
    {
        printf("Your imc is %.2lf. Overweight class II", imc);
    }else if(imc > 39.9)
    {
        printf("Your imc is %.2lf. Overweight class III", imc);
    }
    return 0;
}