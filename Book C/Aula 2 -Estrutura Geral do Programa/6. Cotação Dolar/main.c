#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dado um valor em reais e a cotação do dolar,
//converta esse valor em dolar.
int main()
{
    setlocale (LC_ALL, "Portuguese");
    float valorReal, cotacao;

    printf("Digite o valor em reais: \n");
    scanf("%f", &valorReal);

    printf("Digite o valor cotado do Dolar: \n");
    scanf("%f", &cotacao);

    float dolar = valorReal * cotacao;

    printf("O valor ficará em US$ %.2f \n", dolar);

    return 0;
    // Bruno Laudelino
}
