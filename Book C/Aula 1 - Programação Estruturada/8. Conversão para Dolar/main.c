#include <stdio.h>

int main()
{
    float cotacaoDolar, quantidadeDolar, valorReal;

    // Leitura da cota��o do d�lar
    printf("Digite a cota��o do d�lar: ");
    scanf("%f", &cotacaoDolar);

    // Leitura da quantidade de d�lares
    printf("Digite a quantidade de d�lares dispon�veis: ");
    scanf("%f", &quantidadeDolar);

    // Convers�o para reais
    valorReal = cotacaoDolar * quantidadeDolar;

    // Exibi��o do resultado
    printf("O valor em reais �: R$ %.2f\n", valorReal);

    return 0;
}
