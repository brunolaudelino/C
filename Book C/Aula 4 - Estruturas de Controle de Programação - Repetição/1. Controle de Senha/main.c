#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#define MAX_TENTATIVAS 3
#define SENHA_CORRETA "senha123"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tentativas = 0;
    bool cartaoBloqueado = false;
    char senha[20];

    while (tentativas < MAX_TENTATIVAS) {
        printf("Digite a senha: ");
        scanf("%s", senha);

        if (strcmp(senha, SENHA_CORRETA) == 0) {
            printf("Senha correta! Acesso concedido.\n");
            break;
        } else {
            tentativas++;
            printf("Senha incorreta. Tentativas restantes: %d\n", MAX_TENTATIVAS - tentativas);
        }
    }

    if (tentativas == MAX_TENTATIVAS) {
        printf("Cartão bloqueado. Entre em contato com o banco.\n");
        cartaoBloqueado = true;
    }

    // Restante do código...

    return 0;
}
