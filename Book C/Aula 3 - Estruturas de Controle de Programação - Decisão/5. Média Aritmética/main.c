#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Escreva um programa que calcule a média aritmética de três numeros digitados pelo usuario.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3, media;

    printf("Digite o primeiro número: \n");
    scanf("%f", &num1);

    printf("Digite o segundo número: \n");
    scanf("%f", &num2);

    printf("Digite o terceiro número: \n");
    scanf("%f", &num3);

    media = (num1 + num2 + num3) / 3;

    printf("O média desses números é %2.f \n", media);

    printf("\n");
    printf("\n");
    printf("Obrigado por participar do programa !\n");
    return 0;
}

