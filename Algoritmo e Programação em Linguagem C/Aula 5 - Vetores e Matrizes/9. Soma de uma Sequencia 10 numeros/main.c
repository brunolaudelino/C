#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Determine a soma de uma sequencia de 10 numeros inteiros*/
#define numero 10
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num[numero];
    int soma = 0;

    printf("Digite uma sequencia de 10 números: \n");
    for (int i = 0; i < numero; i++)
    {
        printf("Digite o número : %d\n", i + 1);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < numero; i++)
    {
        soma += num[i];
    }
    printf("A soma de todos os números contabilizados é : %d\n", soma);
    return 0;
}
