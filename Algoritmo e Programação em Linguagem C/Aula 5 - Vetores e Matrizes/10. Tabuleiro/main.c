#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void desenharTabuleiro(char tabuleiro[LINHAS][COLUNAS]) {
    printf("   1   2   3\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < COLUNAS; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < COLUNAS - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < LINHAS - 1) {
            printf("  ---+---+---\n");
        }
    }
}

int main() {
    char tabuleiro[LINHAS][COLUNAS] = {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'}
    };

    // Exibe o tabuleiro inicial
    desenharTabuleiro(tabuleiro);

    return 0;
}
