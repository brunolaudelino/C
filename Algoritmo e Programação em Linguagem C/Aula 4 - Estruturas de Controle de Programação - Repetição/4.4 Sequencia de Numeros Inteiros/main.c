#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que solicite ao usu�rio que digite uma sequ�ncia de n�meros inteiros positivos.
//O programa deve calcular e exibir a soma de todos os n�meros digitados.
//A leitura da sequ�ncia de n�meros deve ser interrompida quando o usu�rio digitar um n�mero negativo.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;
    int soma = 0;
    while (1)
    {

        printf("Digite a sequencia de n�meros inteiros\n");
        scanf("%d", &num);

        if (num >= 0)
        {
            soma += num;
        }
        else
        {
            printf("O n�mero digitado � negativo, tarefa finalizada...\n");
            break;
        }
    }
        printf("A soma dos n�meros digitados �: %d \n", soma);
    return 0;
}
