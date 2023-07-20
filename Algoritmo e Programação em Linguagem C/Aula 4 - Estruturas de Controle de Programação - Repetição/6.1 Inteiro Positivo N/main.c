#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que solicite ao usuário que digite um número inteiro positivo N.
// O programa deve calcular e exibir a soma dos dígitos desse número.
//Por exemplo, se o usuário digitar o número 12345, o programa deve calcular a soma 1 + 2 + 3 + 4 + 5 e exibir o resultado 15.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int N;
    int soma = 0;

    printf("Digite um número inteiro positivo \n");
    scanf("%d", &N);

    if (N <= 0)
    {
    printf("Digite um número positivo.\n");
    return 0;
    }
    while(N > 0)
        {
        int digito = N % 10;
        soma += digito;
        N /= 10;
        }
    printf("A soma dos número digitados é : %d\n", soma);
    return 0;
}
