#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que leia um n�mero inteiro e verifique se ele � um n�mero primo.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, i, ehPrimo = 1;

    printf("Digite um n�mero inteiro: ");
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
        printf("%d � um n�mero primo.\n", numero);
        }
    else
        {
        printf("%d n�o � um n�mero primo.\n", numero);
        }

    return 0;
}
