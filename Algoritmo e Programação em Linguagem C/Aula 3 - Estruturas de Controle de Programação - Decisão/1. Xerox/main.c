#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que resolva o seguinte problema: uma cópia "xerox" custa R$0,25 por folha
//mas acima de 100 folhas esse valor cai para R$0,20 por unidade.
//Dado o total de copias, informe o valor a ser pago.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int quantidade;
    float valor;

    printf("Digite a quantidade de cópias que o senhor(a) irá realizar: \n");
    scanf("%d", &quantidade);

    if (quantidade < 100)
    {
        valor = quantidade * 0.25;
    }
    else
    {
        valor = quantidade * 0.20;
    }
    printf("O valor a ser pago será de R$ %.2f", valor);

    return 0;
}
