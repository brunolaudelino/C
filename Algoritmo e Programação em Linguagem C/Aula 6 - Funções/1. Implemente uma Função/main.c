#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que implemente uma fun��o que retorne a diferen�a entre dois n�meros inteiros digitados
pelo usu�rio*/
int dif(int a, int b)
{
    if (a < b)
    {
        printf("O primeiro n�mero n�o pode ser menor que o segundo\n");
        return -1;
    }
    int diferenca = a -b;
    return diferenca;
}
int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, j;
    printf("Digite dois n�meros inteiros\n");
    scanf("%d%d", &i, &j);

    int diferenca = dif(i, j);

    if (diferenca != -1)
    {
    printf("A diferen�a de %d e %d �: %d\n", i, j, diferenca);
    }

    return 0;
}
