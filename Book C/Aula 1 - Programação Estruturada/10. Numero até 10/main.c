#include <stdio.h>

int main()
{
    int numero;

    // Leitura do n�mero
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    // Verifica��o e exibi��o da mensagem
    if (numero > 10) {
        printf("O n�mero digitado � maior que 10\n");
    }

    return 0;
}
