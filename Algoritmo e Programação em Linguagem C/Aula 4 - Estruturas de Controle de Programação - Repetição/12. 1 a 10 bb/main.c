#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que imprima os n�meros de 1 a 10 em ordem crescente.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num = 0;

    printf("Os N�meros de 1 a 10 s�o:\n");

    for (int i = 0; i <= 10; i++)
        {
            printf("%d...\n", num++);
        }
    return 0;
}
