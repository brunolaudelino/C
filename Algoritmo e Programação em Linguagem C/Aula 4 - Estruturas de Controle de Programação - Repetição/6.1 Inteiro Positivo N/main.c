#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa em C que solicite ao usu�rio que digite um n�mero inteiro positivo N.
// O programa deve calcular e exibir a soma dos d�gitos desse n�mero.
//Por exemplo, se o usu�rio digitar o n�mero 12345, o programa deve calcular a soma 1 + 2 + 3 + 4 + 5 e exibir o resultado 15.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int N;
    int soma = 0;

    printf("Digite um n�mero inteiro positivo \n");
    scanf("%d", &N);

    if (N <= 0)
    {
    printf("Digite um n�mero positivo.\n");
    return 0;
    }
    while(N > 0)
        {
        int digito = N % 10;
        soma += digito;
        N /= 10;
        }
    printf("A soma dos n�mero digitados � : %d\n", soma);
    return 0;
}
