#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
//Escreva um programa que receba um numero e mostre uma mensagem caso
// este seja maior que 10
int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero;

    printf("Digite o n�mero para verificarmos\n");
    scanf("%d", &numero);

    if (numero < 10)
    {
        printf("O n�mero %d � menor que 10\n", numero);
    }
    else
    {
        printf("O n�mero %d � maior ou igual a 10\n", numero);
    }
    return 0;
}
