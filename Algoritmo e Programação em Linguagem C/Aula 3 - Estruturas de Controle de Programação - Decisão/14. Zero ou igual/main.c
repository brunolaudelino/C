#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que leia um número inteiro do usuário e imprima "positivo" se o número for
 positivo, "negativo" se o número for negativo e "zero" se o número for zero.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int i;
    printf("Digite um número inteiro\n");
    scanf("%d", &i);

    if (i > 0)
    {
        printf("O número %d é positivo \n", i);
    }
    else
        if (i < 0)
    {
        printf("O número %d é negativo\n", i);
    }
        else
        {
            printf("O número %d é igual a zero\n", i);
        }
    return 0;
}
