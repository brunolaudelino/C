#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que leia 10 n�meros inteiros e conte quantos desses n�meros s�o pares.
//No final, o programa deve exibir a quantidade de n�meros pares encontrados.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valores[10];
    int i , positivo = 0;

    printf("Digite o n�meros inteiro: \n");
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

    printf("A quantidade de numeros pares s�o: %d\n", positivo);
    return 0;
}
