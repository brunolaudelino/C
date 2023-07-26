#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva a seguinte estrutura:
stuct Funcionario{
int registro;
float salario
char nome[30];
}
Escreva um programa que impllemente essa estrutura*/
struct Funcionario
{
 int registro;
 float salario;
 char nome[30];
};
int main()
{
    setlocale(LC_ALL, "portuguese");
    struct Funcionario func;

    printf("Digite o registro do funcionário: \n");
    scanf("%d", &func.registro);

    printf("Digite o salário do funcionário: \n");
    scanf("%f", &func.salario);

    printf("Digite o nome do Funcionário: \n");
    scanf("%s ", &func.nome);

    printf("--- Dados do Funcionário ---\n");
    printf("O Registro de %s é o número %d e o salário do mesmo(a) é R$%.2f reais .\n", func.nome, func.registro, func.salario);
    printf("--- Obrigado por utilizar o programa ! ---\n");

    return 0;
}
