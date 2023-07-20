#include <stdio.h>

int main()
{
    int numero;

    // Leitura do número
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Verificação e exibição da mensagem
    if (numero > 10) {
        printf("O número digitado é maior que 10\n");
    }

    return 0;
}
