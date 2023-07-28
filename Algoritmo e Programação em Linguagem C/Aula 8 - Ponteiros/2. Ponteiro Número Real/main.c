#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Direcione o endereço de um número real para um ponteiro, e faça que o ponteiro mostre o valor da variavel indiretamente*/
int main()
{
    setlocale(LC_ALL, "portuguse");
    float numero = 3.14; // Variável do tipo float
    float* ponteiro;     // Ponteiro para um float

    ponteiro = &numero; // Atribui o endereço de memória da variável 'numero' ao ponteiro

    printf("Endereço de memória da variável numero: %p\n", &numero); // Imprime o endereço de memória da variável 'numero'
    printf("Valor apontado pelo ponteiro: %.2f\n", *ponteiro);        // Imprime o valor apontado pelo ponteiro

    return 0;
}
