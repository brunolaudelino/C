#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    /*Crie um sistema de caixa eletronico, utilizando menus (switch) e outros recursos, que realizem operações financeiras a partir
    das funções especifiamente projetadas para tal. Lembre-se que o caixa eletronico é um programa que roda como repetição continua
    até que o usuario decida encerar as operações. */
float saldo = 1000.0; //saldo Inicial
//Função para exibir o menu
void exibirMENU()
{
    printf("\n");
    printf("----Caixa Eletrônico----\n");
    printf("\t1. Ver saldo\n");
    printf("\t2. Fazer Saque\n");
    printf("\t3. Fazer Depósito\n");
    printf("\t4. Encerrar operações\n");
    printf("Escolha uma opção: \n");
}
void versaldo()
{
    printf("Seu saldo atual é de: R$: %.2f\n", saldo);
}
void fazerSaque()
{
    float valor;
    printf("Digite o valor de saque: \n");
    scanf("%f", &valor);

    if (valor > saldo)
    {
        printf("Valor insuficiente para saque\n");
    }
    else
    {
        saldo -= valor;
        printf("Saque realizado com sucesso\n");
    }
}
void fazerDeposito()
{
    float valor;
    printf("Digite o valor do depósito: \n");
    scanf("%f", &valor);

    saldo += valor;
    printf("Depósito realizado com sucesso!\n");
}
int main()
{
    setlocale(LC_ALL, "portuguese");
    int opcao;

    while (1)
    {
        exibirMENU();
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            versaldo();
            break;
        case 2:
            fazerSaque();
            break;
        case 3: fazerDeposito();
            break;
        case 4:
            printf("Encerrando Operações.\n");
            return 0;//Encerrando programa
        default:
            printf("Opção Invalida \n");
            break;
        }
    }
    return 0;
}
