#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que leia um número inteiro e verifique se ele é um número primo.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, i, ehPrimo = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1)
        {
        ehPrimo = 0;
        }
    else
        {
        for (i = 2; i <= numero / 2; i++)
            {
            if (numero % i == 0)
                {
                ehPrimo = 0;
                break;
                }
            }
        }

    if (ehPrimo == 1)
        {
        printf("%d é um número primo.\n", numero);
        }
    else
        {
        printf("%d não é um número primo.\n", numero);
        }

    return 0;
}
