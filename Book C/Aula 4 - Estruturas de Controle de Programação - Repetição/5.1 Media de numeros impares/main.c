#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que calcule a média dos números ímpares digitados pelo usuário.
//O programa deve solicitar ao usuário que digite os números (digite zero para encerrar),
//e apenas os números ímpares devem ser considerados para o cálculo da média. No final, exiba a média dos números ímpares.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero;
    int soma = 0;
    int impar = 0;

    printf("CÁLCULO DA MÉDIA NÚMEROS ÍMPARES\n");
    printf("\n");
    while (1)//Verificar se é par, impar ou zero;
    {
        printf("Digite o número para calcular a média(Digite 0 para encerrar\n");
        scanf("%d", &numero);

        if (numero == 0)
        {
            printf("Tarefa encerrada !!!");
            break;
        }
        else if (numero % 2 != 0)
        {
            soma += numero;
            impar++;
        }
    }
    if (impar > 0)
    {
        float media = (float)soma / impar;
        printf("A média dos números impares é: %2.f \n", media);
    }
    else
    {
        printf("Nenhum número impar foi digitado ! \n");
    }
    return 0;
}
