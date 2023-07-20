#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que solicite ao usuário o número de andares de uma pirâmide
// e desenhe a pirâmide utilizando asteriscos '
int main()
{
    int andares;

    printf("Digite a quantidade de andares da pirâmide: /n");
    scanf("%d", &andares);

    //Loop para pecorrer a piramide
    for (int a = 0; a < andares; a ++)
    {
        //Loop para pecorrer a linha da piramide e fazer os espações
        for (int b = 0; b < andares - a - 1; b++)
        {
            printf(" ");
        }
        {
        //Loop para o asteritico
        for (int c = 0; c < 2 * a +1; c++)
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
