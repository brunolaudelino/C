#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa em C que l� 5 numeros inteiros, um por vez.
Conte quantos destes valores s�o negativos e quantos s�o positivos.
Ao final, imprima na tela a quantidade de negativos e positivos.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int a, b, c , d, e, pos =0, neg =0;

    printf("Digite o primeiro n�mero: \n");
    scanf("%d", &a);
    printf("Digite o segundo n�mero: \n");
    scanf("%d", &b);
    printf("Digite o terceiro n�mero: \n");
    scanf("%d", &c);
    printf("Digite o quarto n�mero: \n");
    scanf("%d", &d);
    printf("Digite o quinto e ultimo n�mero: \n");
    scanf("%d", &e);

    if (a < 0)
        neg++;
    else
        pos++;
    if (b < 0)
        neg++;
    else
        pos++;
    if (c < 0)
        neg++;
    else
        pos++;
    if (d < 0)
        neg++;
    else
        pos++;
    if (e < 0)
        neg++;
    else
        pos++;

    printf("Os n�meros negativos s�o: %d e os n�meros positivos s�o: %d \n", neg, pos);
    return 0;
}
