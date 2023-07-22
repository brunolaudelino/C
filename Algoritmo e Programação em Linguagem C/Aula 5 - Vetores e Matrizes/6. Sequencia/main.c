#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Dada uma sequencia de cinco numeros inteiros, mostre-os na tela na ordem inversa da leitura*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num[5];
    for (int i = 0; i < 5 ; i++)
    {
        printf("Digite o %d° número:\n", i + 1);
        scanf("%d", &num[i]);
    }

    printf("Os números em ordem descrescente é :\n");

    for (int i = 4;i >= 0;i --)
    {
        printf("%d\n ", num[i]);
    }
    return 0;
}
//Cosegui fazer o código soziho
