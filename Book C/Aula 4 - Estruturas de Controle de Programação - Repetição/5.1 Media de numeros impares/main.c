#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que calcule a m�dia dos n�meros �mpares digitados pelo usu�rio.
//O programa deve solicitar ao usu�rio que digite os n�meros (digite zero para encerrar),
//e apenas os n�meros �mpares devem ser considerados para o c�lculo da m�dia. No final, exiba a m�dia dos n�meros �mpares.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero;
    int soma = 0;
    int impar = 0;

    printf("C�LCULO DA M�DIA N�MEROS �MPARES\n");
    printf("\n");
    while (1)//Verificar se � par, impar ou zero;
    {
        printf("Digite o n�mero para calcular a m�dia(Digite 0 para encerrar\n");
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
        printf("A m�dia dos n�meros impares �: %2.f \n", media);
    }
    else
    {
        printf("Nenhum n�mero impar foi digitado ! \n");
    }
    return 0;
}
