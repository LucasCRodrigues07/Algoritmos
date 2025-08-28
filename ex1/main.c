#include <stdio.h>

int main(void)
{
    char name[51];
    printf("Digite seu nome: ");
    fgets(name, sizeof(name), stdin);
    name[__builtin_strcspn(name, "\n")] = '\0'; //o fgets le um \n no final. para trabalhar com ele dentro de uma frase precisa tirar esse \n com __builtin_strcspn e setar para \0
    printf("Olá, %s! Seja bem vindo(a)", name);
    return 0;
}