#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Escreva um programa que receba um numero e diga se ele esta no intervalo entre 100 e 200.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;

    printf("Digite o n�mero: ____________\n");
    scanf("%d", &num);

    if (num >= 100 && num <= 200)
    {
       printf("O n�mero %d est� no intervalo entre 100 e 200\n", num);
    }
    else
    {
        printf("O n�mero %d n�o esta no intervalo entre 100 e 200 \n", num);
    }
    printf("\n");
    printf("\n");
    printf("Obrigado por participar do programa ...\n");
    return 0;
}
