#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que leia dois n�meros inteiros do usu�rio e imprima "maior" se o primeiro n�mero
for maior que o segundo n�mero, "menor" se o primeiro n�mero for menor que o segundo n�mero e "igual"
    se os dois n�meros forem iguais.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num1, num2;

    printf("Digite o primeiro n�mero inteiro! \n");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero inteiro! \n");
    scanf("%d", &num2);

    if (num1 > num2)
        printf("O n�mero %d � maior que o n�mero: %d\n", num1, num2);
        else if (num2 > num1)
            printf("O n�mero %d � maior que o n�mero: %d\n", num2, num1);
        else
            printf("Os n�meros s�o iguais !\n");

    return 0;
}
