#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define maxtentativas 3
#define senhacorreta "00000"
int main()
{
    setlocale(LC_ALL, "portuguese");
    int tentativas = 0;
    bool cartaobloqueado = false;
    char senha [10];

    while (tentativas < maxtentativas)
    {
        printf("Digite a senha: \n");
        scanf("%s", senha);

        if(strcmp(senha, senhacorreta) == 0)
        {
         printf("Senha Correta ! Acesso concedido. \n");
            break;
        }
        else
        {
                tentativas++;
                printf("Senha incorreta. Tentativas restantes %d \n", maxtentativas - tentativas);
        }
    }
    if (tentativas == maxtentativas)
    {
        printf("Cartão bloqueado. Entre em contato com o Banco\n");
        cartaobloqueado = true;
    }

    return 0;
}
