#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Uma empresa contrata um encanador a 45 por dia . Fa�a um programa que solicite o n�mero de dias trabalhados pelo encanador
e imprima a quantia liquida que dever� ser paga sabendo que s�o descontados do valor 8% para imposto de renda*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int dia = 45, diastrabalhados;
    float salario, imposto, salarioliq;

    printf("Digite a quantidade de dias que o encanador trabalhou : \n");
    scanf("%d", &diastrabalhados);

    salario = diastrabalhados * dia;
    imposto = salario * 0.08;
    salarioliq = salario - imposto;

    printf("O sal�rio liquido que o encanador ir� receber �: O desconto foi de: %.2f %.2f\n", salarioliq, imposto);
    return 0;
}
