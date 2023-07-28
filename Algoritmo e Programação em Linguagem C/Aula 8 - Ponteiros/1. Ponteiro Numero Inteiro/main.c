#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Declare um ponteiro para um numero inteiro*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero = 10; // Variável do tipo inteiro
    int* ponteiro;   // Ponteiro para um inteiro

    ponteiro = &numero; // Atribui o endereço de memória da variável 'numero' ao ponteiro

    printf("Valor da variável numero: %d\n", numero);       // Imprime o valor da variável 'numero'
    printf("Endereço de memória da variável numero: %p\n", &numero); // Imprime o endereço de memória da variável 'numero'
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro); // Imprime o valor apontado pelo ponteiro

    return 0;
}
