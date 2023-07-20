#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que solicite ao usuário que digite dois números inteiros,
//sendo um valor inicial e um valor final.
//O programa deve imprimir na tela os caracteres ASCII correspondentes aos números decimais no
//intervalo especificado pelo usuário.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int v1, v2;

    printf("Digite dois valores inteiros: Valor inicial e Final\n");
    scanf("%d %d", &v1, &v2);

if (v1 <= v2)
{
    for (int decimal = v1; decimal <= v2; decimal++)
    {
        char caractere = (char)decimal;
        printf("\n");
        printf("%d : %c \n", decimal, caractere);
    }
}
else
{
        printf("O primeiro valor deve ser menor que o segundo.\n");
}
    return 0;
}
