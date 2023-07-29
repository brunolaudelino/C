#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    int num1, num2;
    int soma = 0, dif = 0;
    float multi = 1.0, div = 0.0;

    printf("--- Programa Bruno Laudelino ---\n");
    printf("*** Bem-vindo ao programa ***\n\n");
    printf("Por favor, digite o primeiro n�mero a ser calculado: \n");
    scanf("%d", &num1);

    printf("E agora, digite o segundo n�mero a ser calculado:\n");
    scanf("%d", &num2);
    printf("\n");
    printf("Digite agora a opera��o que ser� realizada referente aos n�meros %d e %d \n", num1, num2);
    printf(" '+' Para somar %d por %d. \n", num1, num2);
    printf(" '-' Para diminuir %d por %d. \n", num1, num2);
    printf(" '*' Para multiplicar %d por %d. \n", num1, num2);
    printf(" '/' Para dividir o n�mero %d por %d. \n", num1, num2);
    printf("--------------------------------\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case '+':
        soma = num1 + num2;
        printf("A soma dos valores %d e %d d� um total de %d\n", num1, num2, soma);
        break;
    case '-':
        dif = num1 - num2;
        printf("A diferen�a entre os valores %d e %d � : %d. \n", num1, num2, dif);
        break;
    case '*':
        multi = num1 * num2;
        printf("A multiplica��o dos n�meros %d e %d � %.2f. \n", num1, num2, multi);
        break;
    case '/':
        if (num2 != 0)
        {
            div = (float)num1 / num2;
            printf("A divis�o de %d por %d � %.2f. \n", num1, num2, div);
        }
        else
        {
            printf("O segundo n�mero n�o pode ser 0. \n");
        }
        break;
    default:
        printf("Op��o Inv�lida! Retorne os valores fornecidos !!!\n");
        return 0;
    }

    return 0;
}
