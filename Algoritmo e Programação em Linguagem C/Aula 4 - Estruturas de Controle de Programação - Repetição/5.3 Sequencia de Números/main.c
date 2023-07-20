#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Claro! Aqui está uma questão mais desafiadora para você praticar:

//Escreva um programa em C que solicite ao usuário que digite uma sequência de números inteiros positivos.
// O programa deve calcular e exibir as seguintes informações:
//- A soma de todos os números digitados.
//- O maior número digitado.
//- A quantidade de números pares.
//- A média dos números ímpares.

//A leitura da sequência de números deve ser interrompida quando o usuário digitar um número negativo.
// Ao final, exiba todas as informações calculadas.

//Lembre-se de utilizar estruturas de repetição e variáveis adequadas para realizar os cálculos e armazenar os resultados.
//Boa sorte!
int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero;
    int soma = 0;
    int maior = 0;
    int par = 0;
    int impar = 0;
    int quantimpar = 0;

    printf("BEM VINDO AO PROGRAMA BLPP\n");
    printf("Iremos somar o valor dos números pares e impares digitados e vamos, \n");
    printf("calcular a média dos números ímpares ...\n");

    while (1)//PAR OU IMPAR
    {
        printf("Digite o Número Inteiro:     \n");
        scanf("%d", &numero);
        if (numero < 0)
        {
            printf(" Número negativo, Tarefa Encerrada\n");
            break;
        }

        soma += numero;

        if (numero > maior)
        {
            maior = numero;
        }
        if (numero % 2 == 0)
        {
            par++;
        }
        else
        {
            impar +=numero;
            quantimpar++;
        }
    }
    printf("RESULTADOS\n");
    printf("A soma de todos os números é: %d\n", soma);
    printf("O maior número digitado é: %d\n", maior);
    printf("A quantidade de números pares contabilizados é %d \n", par);

    if (quantimpar > 0)
    {
        float mediaimpar = (float) impar / quantimpar;
        printf("Média dos números ímpares %d\n", mediaimpar);
    }
    else
    {
        printf("Nenhum número impar foi digitado.\n");
    }
    return 0;
}
