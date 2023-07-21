#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que permita o usuario escolher entre fazer a conversao de
Real para o dolar ou de dolar para o real. Utilize a taxa de cambio $1 = R$5,30*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    float valor, valorConvertido, conversao = 5.3;
    int opcao;

    printf("Digite o valor a ser convertido: \n");;
    scanf("%f", &valor);

    printf("\n 1 - Converter de real para dólar: \n 2 - Converter de dólar para o real: \n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        valorConvertido = valor / conversao;
         printf("O valor convertido será de: $$%.2f\n", valorConvertido);
        break;
    case 2:
        valorConvertido = valor * conversao;
        printf("O valor convertido será de: R$%.2f\n", valorConvertido);
        break;
    default:
        printf("Opção Inválida !!!\n");
    }
    return 0;

}
