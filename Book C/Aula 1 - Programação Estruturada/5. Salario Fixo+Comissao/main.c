#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Elabore um algoritmo que leia o nome de um vendedor, o seu salario fixo
    //E o Total de Vendas efetuadas por ele no mes(dinheiro).
    //Sabendo que esse vendedor ganha 15% de comissao sobre vendas efetuadas,
    //Faça que o algoritmo informe o seu nome,o salario fixo
    //Salario no final do mes
    char nome[50];
    float salariofixo, total_vendas, comissao;

    printf("Digite o nome do Vendedor: ");
    scanf("%s", &nome);

    printf("Digite o Salario Fixo do vendedor: ");
    scanf("%f", &salariofixo);

    printf("Digite o Total de Vendas Efetuadas no mes: ");
    scanf("%f", &total_vendas);

    comissao = salariofixo + (total_vendas * 0,15);

    printf("\nO Salario de %s\n", nome);
    printf("\nfica no valor de %.2f\n", salariofixo);
    printf("\ncom a comissao ele ficara num valor de: %.2f\n", comissao);

    return 0;
}
