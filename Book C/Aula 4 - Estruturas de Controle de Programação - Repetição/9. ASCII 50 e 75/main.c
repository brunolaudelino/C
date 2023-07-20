#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que imprima na tela o caractere ASCII entre 50 e 75.
int main()
{
    int inicio = 50;
    int fim = 75;

    printf("Os caracteres entre aos números decimais 50 e 75: \n");

    for (int decimal = inicio; decimal <= fim; decimal ++)
    {
        char caractere = (char)decimal;
        printf("%d: %c \n", decimal, caractere);
    }
    return 0;
}
