#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que solicite ao usuário que digite um número inteiro positivo N e exiba os N primeiros números pares.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int N;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    printf("Os %d primeiros números pares são:\n", N);

    for (int i = 1; i <= N; i++) {
        int numeroPar = 2 * i;
        printf("%d ", numeroPar);
    }

    printf("\n");

    return 0;
}
