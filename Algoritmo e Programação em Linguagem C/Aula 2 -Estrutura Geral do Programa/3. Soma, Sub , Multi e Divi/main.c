#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Escreva um programa que receba dois numeros e mostre a soma, a subtra��o, a multipilica��o e a divisao desses numeros
int main()
{
    setlocale (LC_ALL, "Portuguese");
    double num1, num2;

    printf("Digite o primeiro n�mero\n");
    scanf("%lf", &num1);

    printf("Digite o segundo n�mero\n");
    scanf("%lf", &num2);

    //SOMA
    double soma = (num1, num2);
    printf("A soma desses numeros �: %.2lf\n", soma);

    // Subtra��o
    double sub = num1 - num2;
    printf("A subtra��o �:%.2lf\n", sub);

    //Multiplica��o
    double multi = num1 * num2;
    printf("A multiplica��o �: %.2lf\n", multi);

    //Divis�o
    double div = (num2 !=0) ? num1 / num2: 0;
    printf("A divis�o �:%.2lf\n", div);

    // Bruno Laudelino
    printf("Obrigado por participar desse programa\n");
    return 0;
}
