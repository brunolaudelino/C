#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que leia um n�mero inteiro do usu�rio e imprima "par"
se o n�mero for par e "�mpar" se o n�mero for �mpar.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int i;
    printf("Digite um n�mero inteiro\n");
    scanf("%d", &i);

    if (i % 2 == 0)
    {
        printf("O n�mero � par\n");
    }
    else
        printf("O n�mero � �mpar\n");
    return 0;
}
