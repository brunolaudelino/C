#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//Escreva um programa que sorteie os números necessários para a MEGA SENA...
int main()
{
    setlocale(LC_ALL, "portuguese");
   int numeros[6];
    int i;

    // Inicializa a semente do gerador de números aleatórios
    srand(time(NULL));

    printf("Os números sorteados da MEGA SENA são: ");

    for (i = 0; i < 6; i++) {
        // Gera um número aleatório entre 1 e 60
        numeros[i] = rand() % 60 + 1;
    }

    // Imprime os números sorteados
    for (i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}
