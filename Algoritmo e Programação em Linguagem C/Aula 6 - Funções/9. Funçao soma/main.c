#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que solicite ao usu�rio que digite dois n�meros inteiros.
Em seguida, crie uma fun��o chamada soma que receba esses dois n�meros como par�metros
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

    printf("Digite dois n�meros inteiro. \n");
    scanf("%d%d", &num1, &num2);

    int resultado = soma(num1, num2);

    printf("O resultado dos n�meros %d e %d � : %d", num1, num2, resultado);
    return 0;
}
