#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//Escreva um programa que sorteie os n�meros necess�rios para a MEGA SENA...
int main()
{
    setlocale(LC_ALL, "portuguese");
   int numeros[6];
    int i;

    // Inicializa a semente do gerador de n�meros aleat�rios
    srand(time(NULL));

    printf("Os n�meros sorteados da MEGA SENA s�o: ");

    for (i = 0; i < 6; i++) {
        // Gera um n�mero aleat�rio entre 1 e 60
        numeros[i] = rand() % 60 + 1;
    }

    // Imprime os n�meros sorteados
    for (i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}
