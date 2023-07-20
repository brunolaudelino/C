#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que leia 10 números inteiros e conte quantos desses números são pares.
//No final, o programa deve exibir a quantidade de números pares encontrados.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valores[10];
    int i , positivo = 0;

    printf("Digite o números inteiro: \n");
    //leitura de inteiros
    for (i = 0; i < 10; i++)
    {
        printf("Valor %d: \n", i + 1);
        scanf("%d", &valores[i]);
    }
    //Negativos
    for (i= 0; i < 10; i++)
    {
        if (valores[i] % 2 == 0)
        {
            positivo++;
        }
    }

    printf("A quantidade de numeros pares são: %d\n", positivo);
    return 0;
}
