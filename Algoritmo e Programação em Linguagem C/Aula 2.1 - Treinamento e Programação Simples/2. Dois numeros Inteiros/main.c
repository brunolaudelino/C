#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Fa�a um programa em C que receba dois n�meros inteiros como entrada e exiba a soma deles.

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    printf("Digite o valor do primeiro n�mero: \n");
    scanf("%d", &num1);

    printf("Digite o valor do segundo n�mero: \n");
    scanf("%d", &num2);

    int soma;
    soma = num1 + num2;

    printf("A soma dos valores %d e do %d �: %d .\n", num1, num2, soma);
    printf("Obrigado por informar os dados.....\n");
    return 0;
}
