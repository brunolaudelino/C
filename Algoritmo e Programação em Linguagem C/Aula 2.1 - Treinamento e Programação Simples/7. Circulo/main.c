#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14159
//Escreva um programa que calcule a area de um circulo de raio r, testando se o valor do raio � menor que zero.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float area, raio;

    printf("Digite o raio do c�rculo: ");
    scanf("%f", &raio);

    if (raio < 0) {
        printf("O raio deve ser maior ou igual a zero.\n");
    } else {
        area = PI * raio * raio;
        printf("A �rea do c�rculo �: %.2f\n", area);
    }

    return 0;
}
