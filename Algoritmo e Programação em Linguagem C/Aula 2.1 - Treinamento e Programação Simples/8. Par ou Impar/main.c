#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um numero inteiro e diga se ele é par ou impar ....
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite o número para verificarmos ... ...\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("O número %d é par ...\n", num);
    }
    else
    {
        printf("O número %d é impar \n", num);
    }
    return 0;
}
