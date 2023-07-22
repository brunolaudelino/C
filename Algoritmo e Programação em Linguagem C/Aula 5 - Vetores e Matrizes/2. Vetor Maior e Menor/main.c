#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa em C que receba um vetor de
10 números inteiros do usuário e imprima na tela o maior e o menor número do vetor.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num[10];

    for (int i = 0; i <10; i ++)//Le os numeros
    {
        printf("Digite o número %d\n", i + 1);
        scanf("%d", &num[i]);
    }
    printf("Agora descobriremos o maior e o menor número desses 10 números\n");
    for (int i = 0; i < 10; i ++)
    {
        printf(" %d |", num[i]);
    }
    printf("\n");
    int maior = num[0];
    int menor = num[0];
    for (int i = 1; i < 10; i++)
    {
        if (num[i] > maior)
        {
            maior = num[i];
        }
        if (num[i] < menor)
        {
            menor = num[i];
        }
    }

    printf("Verificamos que o menor número é %d e o maior número é %d .\n", menor, maior);
    return 0;
}
