#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um numero inteiro e diga se ele � par ou impar ....
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite o n�mero para verificarmos ... ...\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("O n�mero %d � par ...\n", num);
    }
    else
    {
        printf("O n�mero %d � impar \n", num);
    }
    return 0;
}
