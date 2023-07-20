#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Escreva um programa que receba dois numeros e mostre a soma, a subtração, a multipilicação e a divisao desses numeros
int main()
{
    setlocale (LC_ALL, "Portuguese");
    double num1, num2;

    printf("Digite o primeiro número\n");
    scanf("%lf", &num1);

    printf("Digite o segundo número\n");
    scanf("%lf", &num2);

    //SOMA
    double soma = (num1, num2);
    printf("A soma desses numeros é: %.2lf\n", soma);

    // Subtração
    double sub = num1 - num2;
    printf("A subtração é:%.2lf\n", sub);

    //Multiplicação
    double multi = num1 * num2;
    printf("A multiplicação é: %.2lf\n", multi);

    //Divisão
    double div = (num2 !=0) ? num1 / num2: 0;
    printf("A divisão é:%.2lf\n", div);

    // Bruno Laudelino
    printf("Obrigado por participar desse programa\n");
    return 0;
}
