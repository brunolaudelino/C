#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que imprima "Ol�, mundo!" na tela.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Ol� Mundo!\n");
    return 0;
}
