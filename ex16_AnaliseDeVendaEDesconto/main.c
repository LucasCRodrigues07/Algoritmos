#include <stdio.h>

int main(void)
{
    int client;
    double price;
    printf("Type the price and your client rank:\n1- Regular\n2- Bronze\n3- Silver\n4- Gold\n");
    scanf("%lf %d", &price, &client);
    switch (client)
    {
    case 1:
        if (price < 500)
        {
            printf("Regular price: %.2lf\n", price);
        }if (price > 500)
        {
            price = price * 0.95;
            printf("Regular price: %.2lf\n", price);
        }
        break;
    case 2:
        if (price < 500)
        {
            price = price * 0.95;
            printf("Bronze price: %.2lf\n", price);
        }if (price > 500)
        {
            price = price * 0.95;
            price = price * 0.95;
            printf("Bronze price: %.2lf\n", price);
        }
        break;
    case 3:
        if (price < 500)
        {
            price = price * 0.9;
            printf("Silver price: %.2lf\n", price);
        }if (price > 500)
        {
            price = price * 0.9;
            price = price * 0.95;
            printf("Silver price: %.2lf\n", price);
        }
        break;
    case 4:
        if (price < 500)
        {
            price = price * 0.85;
            printf("Gold price: %.2lf\n", price);
        }if (price > 500)
        {
            price = price * 0.85;
            price = price * 0.95;
            printf("Gold price: %.2lf\n", price);
        }
        break;
    }
    return 0;
}