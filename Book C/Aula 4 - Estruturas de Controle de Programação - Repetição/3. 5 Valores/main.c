#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Programa que leia 5 valores e conte quantos desses valores s�o negativos, mostandro essa informa��o no final
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valores[5];
    int i, contadornegativo = 0;

    //Leitura dos Valores
    printf("Digite os 5 valores: \n");
    for (i=0; i < 5; i++)
    {
        printf("Valor %d\n", i + 1);
        scanf("%d", &valores[i]);
    }

    //Contagem valores Negativos
    for (i=0; i < 5; i++)
    {
        if (valores[i] < 5)
        {
            contadornegativo++;
        }
    }

    //Exibi��o
    printf("A quantidade de valores negativos �: %d .\n", contadornegativo);

    return 0;
}
