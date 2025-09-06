#include <stdio.h>

int main(void)
{
    //a) U = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
    //b) A = {x ∈ Ω |0 ≤ x ≤ 2}
    //c) B = {x ∈ Ω |6 < x < 9}
    //d) C = {x ∈ Ω |4 ≤ x < 7}
    //e) D = {x ∈ Ω |3 < x ≤ 5}
    //f) E = {x ∈ Ω |x > 8}
    //g) F = {x ∈ Ω |x ≤ 3}
    //h) G = {x ∈ Ω |x < 0}
    //i) H = {x ∈ Ω |x > 9}

    int omega[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(omega) / sizeof(omega[0]);   //conta os valores dentro de omega

    printf("U = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}\n");

    printf("B. A = { ");
    for (int i = 0; i < n; i++) {
        if (omega[i] >= 0 && omega[i] <= 2) {
        printf("%d ", omega[i]);
        }
    }
    printf("}\n");

    printf("C. B = { ");
    for (int i = 0; i < n; i++)
    {
        if (omega[i] > 6 && omega[i] < 9)
        {
            printf("%d ", omega[i]);
        }
    }
    printf("}\n");

    printf("D. C = { ");
    for (int i = 0; i < n; i++)
    {
        if (omega[i] >= 4 && omega[i] < 7)
        {
            printf("%d ", omega[i]);
        }
    }
    printf("}\n");

    printf("E. D = { ");
    for (int i = 0; i < n; i++)
    {
        if (omega[i] > 3 && omega[i] <= 5)
        {
            printf("%d ", omega[i]);
        }
    }
    printf("}\n");

    printf("F. E = { ");
    for (int i = 0; i < n; i++)
    {
        if (omega[i] < 8)
        {
            printf("%d ", omega[i]);
        }
    }
    printf("}\n");

    printf("G. F = { ");
    for (int i = 0; i < n; i++)
    {
        if (omega[i] <= 3)
        {
            printf("%d ", omega[i]);
        }
    }
    printf("}\n");

    printf("H. G = { ");
    for (int i = 0; i < n; i++)
    {
        if (omega[i] < 0)
        {
            printf("%d ", omega[i]);
        }
    }
    printf("}\n");

    printf("I. H = { ");
    for (int i =0; i < n; i++)
    {
        if (omega[i] > 9)
        {
            printf("%d ", omega[i]);
        }
    }
    printf("}\n");
    return 0;
}