#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que leia uma sequ�ncia de n�meros inteiros positivos fornecidos pelo usu�rio.
//O programa deve exibir a soma dos n�meros pares e o produto dos n�meros �mpares digitados.
//A leitura da sequ�ncia de n�meros deve ser encerrada quando o usu�rio digitar zero.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero;
    int soma = 0;
    int impares = 1;

    while (1)
    {
    printf("Digite um n�mero inteiro (Digite 0 para encerrar o programa...\n");
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
    printf("Verificamos diante de todos os n�meros digitados ...\n");
    printf("Que a soma dos pares � %d e o produto dos impares � %d\n", soma, impares);
    printf("\n");
    printf("Obrigado por utilizar o programa\n");
    return 0;
}
