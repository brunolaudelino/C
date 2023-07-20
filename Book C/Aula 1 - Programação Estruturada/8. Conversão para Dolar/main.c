#include <stdio.h>

int main()
{
    float cotacaoDolar, quantidadeDolar, valorReal;

    // Leitura da cotação do dólar
    printf("Digite a cotação do dólar: ");
    scanf("%f", &cotacaoDolar);

    // Leitura da quantidade de dólares
    printf("Digite a quantidade de dólares disponíveis: ");
    scanf("%f", &quantidadeDolar);

    // Conversão para reais
    valorReal = cotacaoDolar * quantidadeDolar;

    // Exibição do resultado
    printf("O valor em reais é: R$ %.2f\n", valorReal);

    return 0;
}
