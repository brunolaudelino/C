#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que solicite ao usu�rio o n�mero de andares de uma pir�mide
// e desenhe a pir�mide utilizando asteriscos '
int main()
{
    int andares;

    printf("Digite a quantidade de andares da pir�mide: /n");
    scanf("%d", &andares);

    //Loop para pecorrer a piramide
    for (int a = 0; a < andares; a ++)
    {
        //Loop para pecorrer a linha da piramide e fazer os espa��es
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
