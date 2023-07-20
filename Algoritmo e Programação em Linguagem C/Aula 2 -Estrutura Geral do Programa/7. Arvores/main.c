#include <stdio.h>

int main() {
    int altura;

    printf("Digite a altura da árvore de Natal: ");
    scanf("%d", &altura);

    // Loop para percorrer as linhas da árvore
    for (int i = 0; i < altura; i++) {
        // Loop para imprimir os espaços em branco antes dos asteriscos
        for (int j = 0; j < altura - i - 1; j++) {
            printf(" ");
        }

        // Loop para imprimir os asteriscos
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    // Impressão do tronco da árvore
    for (int i = 0; i < altura - 1; i++) {
        printf(" ");
    }
    printf("*\n");

    return 0;
}
