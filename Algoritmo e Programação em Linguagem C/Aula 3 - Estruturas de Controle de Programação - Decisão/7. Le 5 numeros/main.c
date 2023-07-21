#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa em C que lê 5 numeros inteiros, um por vez.
Conte quantos destes valores são negativos e quantos são positivos.
Ao final, imprima na tela a quantidade de negativos e positivos.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int a, b, c , d, e, pos =0, neg =0;

    printf("Digite o primeiro número: \n");
    scanf("%d", &a);
    printf("Digite o segundo número: \n");
    scanf("%d", &b);
    printf("Digite o terceiro número: \n");
    scanf("%d", &c);
    printf("Digite o quarto número: \n");
    scanf("%d", &d);
    printf("Digite o quinto e ultimo número: \n");
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

    printf("Os números negativos são: %d e os números positivos são: %d \n", neg, pos);
    return 0;
}
