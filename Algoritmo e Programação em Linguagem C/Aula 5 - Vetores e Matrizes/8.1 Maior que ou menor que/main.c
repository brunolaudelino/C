#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "portuguese");
    int N;
    printf("Digite a quantidade de n�meros a serem lidos: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("O n�mero de elementos deve ser positivo.\n");
        return 1;
    }

    int numero, maior, menor;
    printf("Digite o 1� n�mero: ");
    scanf("%d", &numero);
    maior = menor = numero;

    for (int i = 2; i <= N; i++) {
        printf("Digite o %d� n�mero: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    }

    printf("O maior n�mero �: %d\n", maior);
    printf("O menor n�mero �: %d\n", menor);

    return 0;
}
