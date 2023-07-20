#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que leia uma sequência de números inteiros positivos fornecidos pelo usuário.
//O programa deve exibir a soma dos números pares e o produto dos números ímpares digitados.
//A leitura da sequência de números deve ser encerrada quando o usuário digitar zero.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero;
    int soma = 0;
    int impares = 1;

    while (1)
    {
    printf("Digite um número inteiro (Digite 0 para encerrar o programa...\n");
    scanf("%d", &numero);
        if ( numero == 0)
        {
            printf("Numero 0: Tarefa Encerrada\n");
            break;
        }
        else if(numero % 2 == 0)
        {
            soma += numero;
        }
        else
        {
            impares *= numero;
        }
    }
    printf("Verificamos diante de todos os números digitados ...\n");
    printf("Que a soma dos pares é %d e o produto dos impares é %d\n", soma, impares);
    printf("\n");
    printf("Obrigado por utilizar o programa\n");
    return 0;
}
