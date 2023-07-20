#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que calcule e exiba o quadrado de um número inteiro informado pelo usuário
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Informe um número para ser calculado: \n");
    scanf("%d", &num);
    int quadrado;
    quadrado = num * num;
    printf("O quadrado do número %d é: %d .\n", num, quadrado);
    printf("Obrigado por informar os dados !\n");

    //by brunolaudelino
    return 0;
}
