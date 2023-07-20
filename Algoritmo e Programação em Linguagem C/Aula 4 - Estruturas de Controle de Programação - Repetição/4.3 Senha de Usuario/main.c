#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que solicite ao usuário que digite uma senha.
//O programa deve repetir a solicitação até que a senha digitada seja "123456".
//Quando a senha correta for digitada, exiba a mensagem "Acesso concedido!" e encerre o programa.
int main()
{
    setlocale(LC_ALL, "portuguese");
    char senha [20];
    char senhacorreta [] = "123456";

    while (1)
    {
    printf("Digite a senha de Usuario\n");
    scanf("%s", &senha);

    if (strcmp(senha, senhacorreta) == 0)
    {
        printf("Acesso Liberado Senha Correta\n");
        break;
    }
    else
    {
        printf("Acesso negado ! Tente novamente ...\n");
        continue;
    }
    }

    return 0;
}
