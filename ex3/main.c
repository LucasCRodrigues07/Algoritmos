#include <stdio.h>

int main(void)
{
    char name[50];
    int idade;
    double altura;
    printf("Digite seu nome: ", &name); //
    fgets(name, sizeof(name), stdin);
    name[__builtin_strcspn(name, "\n")] = '\0';
    printf("Digite sua idade: ", &idade);
    scanf("%d", &idade);
    printf("Digite sua altura: ", &altura);
    scanf("%lf", &altura);
    //printf("Nome de usuario: %s\n", name);
    //printf("Idade: %d\n", idade);
    //printf("Altura: %.2f\n", altura );
    printf("O(a) usuário(a) %s tem %d de idade e mede %.2fm de altura.", name, idade, altura);
    return 0;
}