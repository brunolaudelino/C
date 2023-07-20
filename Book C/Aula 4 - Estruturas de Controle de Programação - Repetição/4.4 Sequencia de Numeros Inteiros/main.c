#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que solicite ao usuário que digite uma sequência de números inteiros positivos.
//O programa deve calcular e exibir a soma de todos os números digitados.
//A leitura da sequência de números deve ser interrompida quando o usuário digitar um número negativo.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;
    int soma = 0;
    while (1)
    {

        printf("Digite a sequencia de números inteiros\n");
        scanf("%d", &num);

        if (num >= 0)
        {
            soma += num;
        }
        else
        {
            printf("O número digitado é negativo, tarefa finalizada...\n");
            break;
        }
    }
        printf("A soma dos números digitados é: %d \n", soma);
    return 0;
}
