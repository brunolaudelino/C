#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva uma fun��o quie retorne a divisao entre dois n�meros.
Aten��o para a quest�o da divis�o por zero*/

float div(float a, float b);
{
    if (b == 0)
    {
    printf("O valor da divis�o n�o pode ser zero: \n\n");
    return -1;
    }
    float divisao = a / b;
    return divisao;
}
int main()
{
    setlocale(LC_ALL, "portuguese");
    float i, j;

    printf("Digite os n�meros inteiros que ser�o divididos: \n");
    scanf("%f%f", &i,&j);

    float divisao = div(i,j);
    if (divisao != -1)
    {
    printf("A divis�o de %.2f e %.2f � : %.2f i\n", i, j, divisao);
    }
    return 0;
}
// Fiz e deu erro no main ....
