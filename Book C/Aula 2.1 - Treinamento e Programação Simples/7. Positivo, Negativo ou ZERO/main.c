#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Crie um programa em C que leia um número inteiro e verifique se ele é positivo, negativo ou zero.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf("Digite um número \n");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("O número é positivo !\n");
    }
    else if (numero < 0)
    {
        printf("O número é negativo !\n");
    }
    else
    {
        printf("O numero é zero !\n");
    }
    return 0;
}
