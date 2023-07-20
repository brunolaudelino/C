#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Use o comando continue em um programa de divisão que respeite a restrição de divisão por zero
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
        printf("ERRO ! Denominador não pode ser 0, ação não permitida.\n");
        continue;
        }
    resultado = numerador / denominador;
    printf("O resultado dessa divisão é %d\n", resultado);
    printf("Obrigado por utilizar nosso programa !\n");
    break;
    }
    return 0;
}
