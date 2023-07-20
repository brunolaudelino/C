#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Dada as medidas de uma sala, informe a area.

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float base, altura;

    printf("Digite o valor da base ou comprimento: \n");
    scanf("%f", &base);

    printf("Digite o valor da altura: \n");
    scanf("%f", &altura);

    float area = altura * base;

    printf("A área determinada da sala é: %.2f metros quadrados\n", area);

    return 0;
}
