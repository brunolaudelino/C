#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
//Escreva um programa em C que receba três números inteiros como entrada e exiba o maior valor entre eles.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3;

    printf("Digite o primeiro número:\n");
    scanf("%d", &num1);

    printf("Digite o segundo número: \n");
    scanf("%d", &num2);

    printf("Digite o terceiro número\n");
    scanf("%d", &num3);

    int maior = num1; //Colocando o num1 como maior.

    if (num2>maior)
    {
        maior= num2;
    }
    if(num3>maior)
    {
    maior=num3;
    }
    printf("O maior número é: %d", maior);

    return 0;
}
