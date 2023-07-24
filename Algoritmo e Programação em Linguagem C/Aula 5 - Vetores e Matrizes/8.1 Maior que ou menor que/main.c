#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "portuguese");
    int N;
    printf("Digite a quantidade de números a serem lidos: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("O número de elementos deve ser positivo.\n");
        return 1;
    }

    int numero, maior, menor;
    printf("Digite o 1º número: ");
    scanf("%d", &numero);
    maior = menor = numero;

    for (int i = 2; i <= N; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    }

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
