#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que calcule e exiba o quadrado de um n�mero inteiro informado pelo usu�rio
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Informe um n�mero para ser calculado: \n");
    scanf("%d", &num);
    int quadrado;
    quadrado = num * num;
    printf("O quadrado do n�mero %d �: %d .\n", num, quadrado);
    printf("Obrigado por informar os dados !\n");

    //by brunolaudelino
    return 0;
}
