#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
//Faça um programa em C que verifique se um número é par ou ímpar. O número deve ser informado pelo usuário.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite por gentileza o número de sua escolha\n");
    printf("Para que o programa determine se ele é par ou ímpar :\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d é um número par. \n", num);
    }
    else
    {
        printf("%d é um número ímpar. \n", num);
    }
    return 0;
}
