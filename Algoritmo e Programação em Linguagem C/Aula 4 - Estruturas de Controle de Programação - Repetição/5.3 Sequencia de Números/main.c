#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Claro! Aqui est� uma quest�o mais desafiadora para voc� praticar:

//Escreva um programa em C que solicite ao usu�rio que digite uma sequ�ncia de n�meros inteiros positivos.
// O programa deve calcular e exibir as seguintes informa��es:
//- A soma de todos os n�meros digitados.
//- O maior n�mero digitado.
//- A quantidade de n�meros pares.
//- A m�dia dos n�meros �mpares.

//A leitura da sequ�ncia de n�meros deve ser interrompida quando o usu�rio digitar um n�mero negativo.
// Ao final, exiba todas as informa��es calculadas.

//Lembre-se de utilizar estruturas de repeti��o e vari�veis adequadas para realizar os c�lculos e armazenar os resultados.
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
    printf("Iremos somar o valor dos n�meros pares e impares digitados e vamos, \n");
    printf("calcular a m�dia dos n�meros �mpares ...\n");

    while (1)//PAR OU IMPAR
    {
        printf("Digite o N�mero Inteiro:     \n");
        scanf("%d", &numero);
        if (numero < 0)
        {
            printf(" N�mero negativo, Tarefa Encerrada\n");
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
    printf("A soma de todos os n�meros �: %d\n", soma);
    printf("O maior n�mero digitado �: %d\n", maior);
    printf("A quantidade de n�meros pares contabilizados � %d \n", par);

    if (quantimpar > 0)
    {
        float mediaimpar = (float) impar / quantimpar;
        printf("M�dia dos n�meros �mpares %d\n", mediaimpar);
    }
    else
    {
        printf("Nenhum n�mero impar foi digitado.\n");
    }
    return 0;
}
