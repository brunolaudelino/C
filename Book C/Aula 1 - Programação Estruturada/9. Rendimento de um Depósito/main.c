#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Calcule o rendimento de um dep�sito ap�s um mes de aplica��o
    //Considere a taxa fixa de juros de remunera��o 0,50% ao mes

    float deposito, rendimento;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    rendimento= deposito * 0.005;

    printf("Ao terminar o mes o valor do rendimento sera: R$ %2f", rendimento);

    return 0;

// Muito feliz que no dia 04/07/2023 consegui realizar esse codigo
//sem ajuda de chatgpt e sozinho, Parab�ns pela jornada
}
