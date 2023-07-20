#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que conceda um aumento de 10% ao salario dos funcionarios de uma empresa,
//os quais recebem até R$1.000,00
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario;

    printf("Digite o valor do seu salário: \n");
    scanf("%f", &salario);

    if (salario <= 1000)
    {
        float aumento = salario + (salario * 0,10);
        printf("O Salário será no valor de R$: %.2f \n", aumento);
    }
    else
    {
        printf("O valor informado não corresponde ao aumento fornecido pela empresa !\n");
    }
    return 0;
}
