#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que solicite ao usu�rio que digite um n�mero inteiro positivo N e exiba os N primeiros n�meros pares.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int N;

    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &N);

    printf("Os %d primeiros n�meros pares s�o:\n", N);

    for (int i = 1; i <= N; i++) {
        int numeroPar = 2 * i;
        printf("%d ", numeroPar);
    }

    printf("\n");

    return 0;
}
