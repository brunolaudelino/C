#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que implemente uma fun��o que passe dado n�mero inteiro como parametro,
e este desenhe um numero equivalente a "*" na tela */
void parametro(int a)
{
printf(" - - - - - \n");
    for (int i = 0; i < a; i++)
    {
    printf(" *** ", i + 2);
    }
    printf("\n");
}
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;
    printf("Digite a quantidade de n�meros que deseja desenhar : \n");
    scanf("%d", &num);

    parametro(num);

    return 0;
}
