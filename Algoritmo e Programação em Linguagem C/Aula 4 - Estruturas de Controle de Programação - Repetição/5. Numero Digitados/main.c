#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que calcule a media dos numeros digitados pelo usuario
//Se eles forem pares. O programa deve terminar a leitura se o usuario digitar zero.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero;
    int soma = 0;
    int quantidadenumero = 0;

    printf("Digite os numeros (digite zero para encerrar !");

    while (1)
    {
        printf("Digite um n�mero: ");
        scanf("%d", &numero);

        if (numero == 0)
        {
            break;
        }
        if (numero % 2 == 0)
        {
            soma += numero;
            quantidadenumero++;
        }
    }
    if (quantidadenumero > 0)
    {
        float media = (float)soma / quantidadenumero;
        printf("A m�dia dos n�meros pares digitados �: %.2f \n", media);
    }
    else
        {
            printf("Nenhum n�mero par foi digitado \n!");
        }
    return 0;
}
