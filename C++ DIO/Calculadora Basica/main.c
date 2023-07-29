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
    printf("Por favor, digite o primeiro número a ser calculado: \n");
    scanf("%d", &num1);

    printf("E agora, digite o segundo número a ser calculado:\n");
    scanf("%d", &num2);
    printf("\n");
    printf("Digite agora a operação que será realizada referente aos números %d e %d \n", num1, num2);
    printf(" '+' Para somar %d por %d. \n", num1, num2);
    printf(" '-' Para diminuir %d por %d. \n", num1, num2);
    printf(" '*' Para multiplicar %d por %d. \n", num1, num2);
    printf(" '/' Para dividir o número %d por %d. \n", num1, num2);
    printf("--------------------------------\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case '+':
        soma = num1 + num2;
        printf("A soma dos valores %d e %d dá um total de %d\n", num1, num2, soma);
        break;
    case '-':
        dif = num1 - num2;
        printf("A diferença entre os valores %d e %d é : %d. \n", num1, num2, dif);
        break;
    case '*':
        multi = num1 * num2;
        printf("A multiplicação dos números %d e %d é %.2f. \n", num1, num2, multi);
        break;
    case '/':
        if (num2 != 0)
        {
            div = (float)num1 / num2;
            printf("A divisão de %d por %d é %.2f. \n", num1, num2, div);
        }
        else
        {
            printf("O segundo número não pode ser 0. \n");
        }
        break;
    default:
        printf("Opção Inválida! Retorne os valores fornecidos !!!\n");
        return 0;
    }

    return 0;
}
