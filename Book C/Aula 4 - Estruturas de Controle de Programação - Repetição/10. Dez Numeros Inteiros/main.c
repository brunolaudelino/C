#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que receba d�z numeros inteiros do teclado e diga quanto s�o pares e quanto sao impares
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num, par = 0, impar =0;

     printf("Digite 10 n�meros inteiros: \n");

    for(int i = 0; i <=10; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
        {
        par++;
        }
        else
        {
        impar++;
        }
    }
    printf("Quantidade de n�meros pares: %d\n", par);
    printf("Quantidade de n�meros �mpares: %d \n", impar);
    return 0;
}
