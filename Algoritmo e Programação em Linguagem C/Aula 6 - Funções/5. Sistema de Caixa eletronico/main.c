#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    /*Crie um sistema de caixa eletronico, utilizando menus (switch) e outros recursos, que realizem opera��es financeiras a partir
    das fun��es especifiamente projetadas para tal. Lembre-se que o caixa eletronico � um programa que roda como repeti��o continua
    at� que o usuario decida encerar as opera��es. */
float saldo = 1000.0; //saldo Inicial
//Fun��o para exibir o menu
void exibirMENU()
{
    printf("\n");
    printf("----Caixa Eletr�nico----\n");
    printf("\t1. Ver saldo\n");
    printf("\t2. Fazer Saque\n");
    printf("\t3. Fazer Dep�sito\n");
    printf("\t4. Encerrar opera��es\n");
    printf("Escolha uma op��o: \n");
}
void versaldo()
{
    printf("Seu saldo atual � de: R$: %.2f\n", saldo);
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
    printf("Digite o valor do dep�sito: \n");
    scanf("%f", &valor);

    saldo += valor;
    printf("Dep�sito realizado com sucesso!\n");
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
            printf("Encerrando Opera��es.\n");
            return 0;//Encerrando programa
        default:
            printf("Op��o Invalida \n");
            break;
        }
    }
    return 0;
}
