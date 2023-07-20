#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um programa que receba um nuimero qualquer e mostre o seu dobro.
int main()
{
    setlocale (LC_ALL, "Portuguese");
    int num1;
    printf("Digite um número qualquer diferente de 0: /n");
    scanf("%d", &num1);

    int dobro = num1 * 2;

    printf("O dobro do número é: %d é %d /n",num1, dobro);

    return 0;
}
