#include <stdio.h>

int main(void)
{
    char color;
    printf("Characters avaible: R, G, B, K\n");
    printf("Enter the first character of the color you want: \n");
    scanf("%c", &color);
    switch (color)
    {
    case 'R': printf("the hexadecimal code for Red is #FF0000");
        break;
    case 'G': printf("the hexadecimal code for Green is #00FF00");
        break;
    case 'B': printf("the hexadecimal code for Blue is #0000FF");
        break;
    case 'K': printf("the hexadecimal code for Black is #000000");
        break;
    }
    return 0;
}