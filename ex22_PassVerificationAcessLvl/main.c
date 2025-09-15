#include <stdio.h>
#include <string.h>

int main(void)
{
    char senha[21];  //fflush e strcmp > fflush eu nsei bem mas, strcmp eh muito forte pois compara variaveis e se verdade, retorna 0
    char usuario[21];
    fflush(stdin);
    printf("Digite usuário e senha: \n");
    scanf("%s %s", &usuario, &senha);
    if (strcmp(senha, "admin123")==0)
    {
     printf("Bem-vindo, %s. Nível de acesso: Administrador.", usuario);
        return 0;
    }
    if (strcmp(senha, "user456")==0)
    {
        printf("Bem-vindo, %s. Nível de acesso: Padrão", usuario);
    }
    printf("Senha incorreta");
        return 0;
}