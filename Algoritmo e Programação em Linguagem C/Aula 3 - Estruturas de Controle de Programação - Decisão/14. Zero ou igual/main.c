#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que leia um n�mero inteiro do usu�rio e imprima "positivo" se o n�mero for
 positivo, "negativo" se o n�mero for negativo e "zero" se o n�mero for zero.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int i;
    printf("Digite um n�mero inteiro\n");
    scanf("%d", &i);

    if (i > 0)
    {
        printf("O n�mero %d � positivo \n", i);
    }
    else
        if (i < 0)
    {
        printf("O n�mero %d � negativo\n", i);
    }
        else
        {
            printf("O n�mero %d � igual a zero\n", i);
        }
    return 0;
}
