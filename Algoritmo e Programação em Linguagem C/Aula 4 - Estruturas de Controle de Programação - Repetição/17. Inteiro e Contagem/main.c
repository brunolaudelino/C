#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa em C que leia um n�mero inteiro do usu�rio e imprima os n�meros de 1 a esse n�mero.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int i = 0, num;

    printf("Digite um n�mero inteiro ...\n");
    scanf("%d", &num);

    printf("N�mero de um at� %d �: \n", num);
    for (i = 0; i <= num; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
