#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Use o comando continue em um programa de divis�o que respeite a restri��o de divis�o por zero
int main()
{
    setlocale(LC_ALL, "portuguese");
    int numerador, denominador, resultado;

    while (1)
    {
        printf("Digite o numero do numerador ! ...\n");
        scanf("%d", &numerador);

        printf("Digite o numero do denominador ! ...\n");
        scanf("%d", &denominador);

        if (denominador == 0)
        {
        printf("ERRO ! Denominador n�o pode ser 0, a��o n�o permitida.\n");
        continue;
        }
    resultado = numerador / denominador;
    printf("O resultado dessa divis�o � %d\n", resultado);
    printf("Obrigado por utilizar nosso programa !\n");
    break;
    }
    return 0;
}
