#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um programa que receba um nuimero qualquer e mostre o seu dobro.
int main()
{
    setlocale (LC_ALL, "Portuguese");
    int num1;
    printf("Digite um n�mero qualquer diferente de 0: /n");
    scanf("%d", &num1);

    int dobro = num1 * 2;

    printf("O dobro do n�mero �: %d � %d /n",num1, dobro);

    return 0;
}
