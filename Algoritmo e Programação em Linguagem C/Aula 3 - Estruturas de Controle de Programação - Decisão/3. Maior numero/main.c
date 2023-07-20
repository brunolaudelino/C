#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que diga qual é o maior de dois números distintos.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num1, num2;

    printf("Digite o primeiro número !\n");
    scanf("%d", &num1);

    printf("Digite o segundo número\n");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("O número %d é maior ! \n", num1);
    }
    else if (num1 < num2)
    {
        printf("O número %d é o maior ! \n", num2);
    }
    else
    {
        printf("O números números são iguais ! ");
    }
    printf("Obrigado por responder o questionario \n");

    return 0;
}
