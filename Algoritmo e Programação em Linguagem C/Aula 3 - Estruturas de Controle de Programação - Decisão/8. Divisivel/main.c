#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa em C que leia um n�mero e informe se ele � divisivel por 2, por 3 ou por 5
ou se n�o � divisivel por nenhum deles*/

int main()
{
    setlocale(LC_ALL, "portuguese");
    int a;

    printf("Digite o valor a ser calculado: \n");
    scanf("%d", &a);

    if (a % 2 == 0 || a % 3 == 0 || a % 5 == 0)
    {
        printf("O n�mero � divisivel por 2, 3 ou 5.\n");
    }
    else
    {
        printf("O n�mero n�o � divisivel por 2, 3 ou 5.\n");
    }

    printf("Obrigado por participar do programa.\n");

    return 0;
}
