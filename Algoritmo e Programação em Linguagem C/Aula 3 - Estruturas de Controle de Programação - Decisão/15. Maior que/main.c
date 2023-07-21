#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que leia dois números inteiros do usuário e imprima "maior" se o primeiro número
for maior que o segundo número, "menor" se o primeiro número for menor que o segundo número e "igual"
    se os dois números forem iguais.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num1, num2;

    printf("Digite o primeiro número inteiro! \n");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro! \n");
    scanf("%d", &num2);

    if (num1 > num2)
        printf("O número %d é maior que o número: %d\n", num1, num2);
        else if (num2 > num1)
            printf("O número %d é maior que o número: %d\n", num2, num1);
        else
            printf("Os números são iguais !\n");

    return 0;
}
