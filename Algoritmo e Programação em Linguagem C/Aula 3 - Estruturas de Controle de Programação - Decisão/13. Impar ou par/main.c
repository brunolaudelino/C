#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que leia um número inteiro do usuário e imprima "par"
se o número for par e "ímpar" se o número for ímpar.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int i;
    printf("Digite um número inteiro\n");
    scanf("%d", &i);

    if (i % 2 == 0)
    {
        printf("O número é par\n");
    }
    else
        printf("O número é ímpar\n");
    return 0;
}
