#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Faça um programa em C que receba dois números inteiros como entrada e exiba a soma deles.

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    printf("Digite o valor do primeiro número: \n");
    scanf("%d", &num1);

    printf("Digite o valor do segundo número: \n");
    scanf("%d", &num2);

    int soma;
    soma = num1 + num2;

    printf("A soma dos valores %d e do %d é: %d .\n", num1, num2, soma);
    printf("Obrigado por informar os dados.....\n");
    return 0;
}
