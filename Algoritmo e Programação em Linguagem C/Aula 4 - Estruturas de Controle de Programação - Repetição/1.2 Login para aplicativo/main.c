#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#define senhacorreta"acesso123"
#define maxtentativas 3
//Desenvolver sistema de Login de um aplicativo
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tentativas = 0;
    bool cartaobloqueado = false;
    char senha[10];

    while (tentativas < maxtentativas)
    {
        printf("Digite a senha: \n");
        scanf("%s",senha);
        if (strcmp(senha, senhacorreta) == 0)
        {
            printf("Senha Correta ! Acesso Liberado !\n");
            break;
        }
        else
        {
            tentativas++;
            printf("Senha incorreta, Tentativas restantes: %d\n", maxtentativas - tentativas);
        }
    }
    if (tentativas == maxtentativas)
    {
        printf("Login Bloqueado, Por favor redefina sua senha.\n");
        cartaobloqueado = true;
    }
    return 0;
}
