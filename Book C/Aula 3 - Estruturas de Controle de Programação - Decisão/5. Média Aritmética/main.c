#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Escreva um programa que calcule a m�dia aritm�tica de tr�s numeros digitados pelo usuario.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3, media;

    printf("Digite o primeiro n�mero: \n");
    scanf("%f", &num1);

    printf("Digite o segundo n�mero: \n");
    scanf("%f", &num2);

    printf("Digite o terceiro n�mero: \n");
    scanf("%f", &num3);

    media = (num1 + num2 + num3) / 3;

    printf("O m�dia desses n�meros � %2.f \n", media);

    printf("\n");
    printf("\n");
    printf("Obrigado por participar do programa !\n");
    return 0;
}

