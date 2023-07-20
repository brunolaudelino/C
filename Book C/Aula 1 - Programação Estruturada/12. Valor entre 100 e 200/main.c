#include <stdio.h>
#include <stdlib.h>
// Esse cogigo ficou estranho
// Esta errado
int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d, &numero");

    if (numero >=100 && numero <=200)
    {
        printf("O Numero esta no intervalo entre 100 e 200. \n");
    }
    else
    {
        printf("O Numero nao esta no intervalo entre 100 e 200. \n");
    }

    return 0;
}
