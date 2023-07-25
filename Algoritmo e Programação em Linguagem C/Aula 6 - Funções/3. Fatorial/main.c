#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Desenhe o algoritmo do calculo recursivo do fatorial de determinado n�mero inteiro */
int fatorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n*fatorial (n -1);
    }
}
int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero;

    printf("Digite um n�mero inteiro n�o negativo: \n");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("O n�mero deve ser n�o negativo.\n");
    }
    else
    {
        int resultado = fatorial(numero);
        printf("O fatorial de %d �: %d \n", numero, resultado);
    }
    return 0;
}
