#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que diga qual � o maior de dois n�meros distintos.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num1, num2;

    printf("Digite o primeiro n�mero !\n");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero\n");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("O n�mero %d � maior ! \n", num1);
    }
    else if (num1 < num2)
    {
        printf("O n�mero %d � o maior ! \n", num2);
    }
    else
    {
        printf("O n�meros n�meros s�o iguais ! ");
    }
    printf("Obrigado por responder o questionario \n");

    return 0;
}
