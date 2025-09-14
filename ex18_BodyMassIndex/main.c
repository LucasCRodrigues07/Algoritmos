#include <stdio.h>

int main(void)
{
    double weight, height;
    double ibm;
    printf("Enter your weight in kilograms: ");
    scanf("%lf", &weight);
    printf("Enter your height in meter: ");
    scanf("%lf", &height);
    ibm = weight / (height * height);
    if (ibm < 18.5)
    {
    printf("Your ibm is %.2lf. Underweight", ibm);
    }else if (ibm > 18.5 && ibm < 24.9)
    {
        printf("Your ibm is %.2lf. Normal weight", ibm);
    }else if(ibm > 24.9 && ibm < 29.9)
    {
        printf("Your ibm is %.2lf. Overweight", ibm);
    }else if(ibm > 29.9 && ibm < 34.9)
    {
        printf("Your ibm is %.2lf. Overweight class I", ibm);
    }else if(ibm > 34.9 && ibm < 39.9)
    {
        printf("Your ibm is %.2lf. Overweight class II", ibm);
    }else if(ibm > 39.9)
    {
        printf("Your ibm is %.2lf. Overweight class III", ibm);
    }
    return 0;
}