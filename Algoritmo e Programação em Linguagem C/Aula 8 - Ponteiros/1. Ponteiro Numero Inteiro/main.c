#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Declare um ponteiro para um numero inteiro*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero = 10; // Vari�vel do tipo inteiro
    int* ponteiro;   // Ponteiro para um inteiro

    ponteiro = &numero; // Atribui o endere�o de mem�ria da vari�vel 'numero' ao ponteiro

    printf("Valor da vari�vel numero: %d\n", numero);       // Imprime o valor da vari�vel 'numero'
    printf("Endere�o de mem�ria da vari�vel numero: %p\n", &numero); // Imprime o endere�o de mem�ria da vari�vel 'numero'
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro); // Imprime o valor apontado pelo ponteiro

    return 0;
}
