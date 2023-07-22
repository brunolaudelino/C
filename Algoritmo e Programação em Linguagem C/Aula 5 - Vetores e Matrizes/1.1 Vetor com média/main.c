#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Faça um programa em C que receba tres notas do usuario interativamente e as armazene em um vetor
Em seguida, o programa deve calcular a média das tres notas e imprimila na tela. */
int main()
{
    setlocale(LC_ALL, "portuguese");
    int notas[3];

    for (int i = 0; i < 3; i ++)
    {
        printf("Digite a nota %d :  \n", i + 1);
        scanf("%d", &notas[i]);
    }
   float media = (float) (notas[0] + notas[1] + notas[2]) / 3.0 ;
    printf("A média das notas é:  %.2f", media);

    return 0;
}
