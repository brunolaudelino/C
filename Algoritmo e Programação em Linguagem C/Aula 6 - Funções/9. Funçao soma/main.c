#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que solicite ao usuário que digite dois números inteiros.
Em seguida, crie uma função chamada soma que receba esses dois números como parâmetros
 e retorne a soma deles. Imprima o resultado na tela.*/
int soma (int a, int b)
 {
     int resultado = a + b;
     return resultado;
 }
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num1, num2;

    printf("Digite dois números inteiro. \n");
    scanf("%d%d", &num1, &num2);

    int resultado = soma(num1, num2);

    printf("O resultado dos números %d e %d é : %d", num1, num2, resultado);
    return 0;
}
