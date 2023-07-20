#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que leia 7 valores inteiros e conte quantos desses valores são negativos.
//No final, o programa deve exibir a quantidade de valores negativos encontrados.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int valores [7];
    int i, contadornegativo = 0;

    //Leitura dos valores inteiros
    printf("Digite os valores: \n");
    for (i = 0; i < 7; i++)
    {
        printf("Valor de %d\n", i + 1);
        scanf("%d", &valores[i]);
    }

        //contagem
    for (i=0; i < 7; i++)
    {
        if (valores[i] < 0)
            contadornegativo++;
    }

    //Exibição de ResultaDO
    printf("A quantidade de negativos é: %d\n", contadornegativo);
    return 0;
}
