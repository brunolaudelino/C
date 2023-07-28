#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Direcione o endere�o de um n�mero real para um ponteiro, e fa�a que o ponteiro mostre o valor da variavel indiretamente*/
int main()
{
    setlocale(LC_ALL, "portuguse");
    float numero = 3.14; // Vari�vel do tipo float
    float* ponteiro;     // Ponteiro para um float

    ponteiro = &numero; // Atribui o endere�o de mem�ria da vari�vel 'numero' ao ponteiro

    printf("Endere�o de mem�ria da vari�vel numero: %p\n", &numero); // Imprime o endere�o de mem�ria da vari�vel 'numero'
    printf("Valor apontado pelo ponteiro: %.2f\n", *ponteiro);        // Imprime o valor apontado pelo ponteiro

    return 0;
}
