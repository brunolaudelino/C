#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa em C que leia tres valores e apresente qual � o maior e qual � o menor numero*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num1, num2, num3, maior, menor;

    printf("Digite uma sequencia de 3 n�meros inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2)
    {
        if (num1 < num3)
            menor = num1;
    }
    else
    {
        if (num2 < num3)
            menor = num2;
        else
            menor = num3;
    }
    if (num1 > num2)
    {
        if (num1 > num3)
            maior = num1;
        else
            maior = num3;
    }
    else {
        if (num2 > num3)
        maior = num2;
    else
        maior = num3;
    }

    printf("Primeira vers�o Maior %d \n Segunda vers�o Menor: %d", maior, menor);


    return 0;
}
