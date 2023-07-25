#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva uma função quie retorne a divisao entre dois números.
Atenção para a questão da divisão por zero*/

float div(float a, float b);
{
    if (b == 0)
    {
    printf("O valor da divisão não pode ser zero: \n\n");
    return -1;
    }
    float divisao = a / b;
    return divisao;
}
int main()
{
    setlocale(LC_ALL, "portuguese");
    float i, j;

    printf("Digite os números inteiros que serão divididos: \n");
    scanf("%f%f", &i,&j);

    float divisao = div(i,j);
    if (divisao != -1)
    {
    printf("A divisão de %.2f e %.2f é : %.2f i\n", i, j, divisao);
    }
    return 0;
}
// Fiz e deu erro no main ....
