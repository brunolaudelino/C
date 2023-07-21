#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa em C que leia um número inteiro do usuário e imprima os números de 1 a esse número.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int i = 0, num;

    printf("Digite um número inteiro ...\n");
    scanf("%d", &num);

    printf("Número de um até %d é: \n", num);
    for (i = 0; i <= num; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
