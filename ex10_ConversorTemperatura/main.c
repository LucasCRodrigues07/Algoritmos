#include <stdio.h>

int main(void)
{
    double celsius, fahrenheit, kelvin;
    printf("informe a temperatura em graus celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    kelvin = celsius + 273.15;
    printf("Temperatura em Celsius: %.2lfº\n", celsius);
    printf("Temperatura em Fahrenheit: %.2lfF\n", fahrenheit);
    printf("Temperatura em Kelvin: %.2lfK", kelvin);
    return 0;
}