#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que implemente uma função que retorne a diferença entre dois números inteiros digitados
pelo usuário*/
int dif(int a, int b)
{
    if (a < b)
    {
        printf("O primeiro número não pode ser menor que o segundo\n");
        return -1;
    }
    int diferenca = a -b;
    return diferenca;
}
int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, j;
    printf("Digite dois números inteiros\n");
    scanf("%d%d", &i, &j);

    int diferenca = dif(i, j);

    if (diferenca != -1)
    {
    printf("A diferença de %d e %d é: %d\n", i, j, diferenca);
    }

    return 0;
}
