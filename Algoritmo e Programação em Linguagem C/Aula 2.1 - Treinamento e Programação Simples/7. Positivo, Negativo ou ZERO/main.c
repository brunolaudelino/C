#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Crie um programa em C que leia um n�mero inteiro e verifique se ele � positivo, negativo ou zero.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf("Digite um n�mero \n");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("O n�mero � positivo !\n");
    }
    else if (numero < 0)
    {
        printf("O n�mero � negativo !\n");
    }
    else
    {
        printf("O numero � zero !\n");
    }
    return 0;
}
