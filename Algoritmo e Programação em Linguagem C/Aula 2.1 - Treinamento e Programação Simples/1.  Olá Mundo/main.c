#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que imprima "Olá, mundo!" na tela.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Olá Mundo!\n");
    return 0;
}
