#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que conceda um aumento de 10% ao salario dos funcionarios de uma empresa,
//os quais recebem at� R$1.000,00
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario;

    printf("Digite o valor do seu sal�rio: \n");
    scanf("%f", &salario);

    if (salario <= 1000)
    {
        float aumento = salario + (salario * 0,10);
        printf("O Sal�rio ser� no valor de R$: %.2f \n", aumento);
    }
    else
    {
        printf("O valor informado n�o corresponde ao aumento fornecido pela empresa !\n");
    }
    return 0;
}
