#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Soma, Subtra��o, Multiplica��o, Divisao

    float  num1, num2;
    float soma, sub, multi, div;

    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);

    printf("\nDigite o segundo numero: ");
    scanf("%f", &num2);

    //soma
    soma = num1 + num2;
    printf("A Soma e: %.2f \n", soma);

    //subtra��o
    sub = num1 - num2;
    printf("A Subtra��o e: %.2f\n", sub);

    //Multiplica��o
    multi = num1 * num2;
    printf("A Multiplicacao e: %.2f\n", multi);

    //Divis�o
    div = num1 / num2;
    printf("A Divisao e: %.2f\n", div);


    printf("Hello world!\n");
    return 0;
}
