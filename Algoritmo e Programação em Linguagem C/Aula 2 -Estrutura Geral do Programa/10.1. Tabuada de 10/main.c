#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que solicite ao usuário um número inteiro e imprima a tabuada desse número até o valor de 10

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um número para calcular até 10: \n");
    scanf("%d", &num);

    for (int i = 1; i <=10; i++)
    {
        int resultado = num * i;

        printf("%d X %d = %d \n", num, i, resultado);

    }
    printf("Obrigado por participar da Tabuada\n");
    return 0;
}
