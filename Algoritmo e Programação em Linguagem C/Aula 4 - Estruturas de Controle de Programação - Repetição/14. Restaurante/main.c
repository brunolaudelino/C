#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que leia um valor de despesa de restaurante. O valor da gorjeta....(em Portcentagem)
e o numero de pessoas para dividir a conta. Imprima o valor de cada um deve pagar.
Assuma que a conta irá ser paga igualmente.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int pessoas;
    float despesa, gorjeta;

    printf("Digite o valor a ser pago ao restaurante:\n");
    scanf("%2.f", &despesa);

    gorjeta = despesa * 0.1;

    printf("Digite o números de pessoas que irão dividir a conta! \n");
    scanf(" %d", &pessoas);

    float valorapagar = (despesa + gorjeta) / pessoas;

    printf("O valor dividido para cada pessoa é: R$:%.2f \n", valorapagar);

    return 0;
}
