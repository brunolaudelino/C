#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que leia um n�mero inteiro positivo do usu�rio e exiba a tabuada desse n�mero de 1 a 10.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero;
    printf("Digite o n�mero positivo:    \n");
    scanf("%d", &numero);

   if (numero > 0)
   {
       printf("Tabuada do n�mero: %d \n", numero);
       for (int i = 1; i <=100; i++)
       {
           printf("%d x %d = %d \n", numero, i, numero * i);
       }
   }
    else
    {
        printf("O num�ro digitado n�o � valido \n");
    }


    return 0;
}
