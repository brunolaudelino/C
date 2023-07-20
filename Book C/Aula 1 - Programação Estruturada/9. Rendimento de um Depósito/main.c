#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Calcule o rendimento de um depósito após um mes de aplicação
    //Considere a taxa fixa de juros de remuneração 0,50% ao mes

    float deposito, rendimento;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    rendimento= deposito * 0.005;

    printf("Ao terminar o mes o valor do rendimento sera: R$ %2f", rendimento);

    return 0;

// Muito feliz que no dia 04/07/2023 consegui realizar esse codigo
//sem ajuda de chatgpt e sozinho, Parabéns pela jornada
}
