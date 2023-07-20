#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que leia um número inteiro positivo do usuário e exiba a tabuada desse número de 1 a 10.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero;
    printf("Digite o número positivo:    \n");
    scanf("%d", &numero);

   if (numero > 0)
   {
       printf("Tabuada do número: %d \n", numero);
       for (int i = 1; i <=100; i++)
       {
           printf("%d x %d = %d \n", numero, i, numero * i);
       }
   }
    else
    {
        printf("O numéro digitado não é valido \n");
    }


    return 0;
}
