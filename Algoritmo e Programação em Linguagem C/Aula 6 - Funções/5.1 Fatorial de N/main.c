#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa em C que receba um valor inteiro positivo N do usu�rio e
 calcule o fatorial desse n�mero utilizando uma fun��o recursiva. Em seguida, exiba o resultado na tela.*/
 int fatorial(int a)
 {
 if (a == 0 || a == 1)
 {
     return 1;
 }
 else
    return a * fatorial(a - 1);
 }
int main()
{
    setlocale(LC_ALL, "portuguese");
    int N;

    printf("Digite um n�mero inteiro n�o negativo: \n");
    scanf("%d", &N);

    if (N < 0)
    {
        printf("O n�mero deve ser n�o negativo.\n");
    }
    else
    {
        int resultado = fatorial(N);
        printf("O fatorial de %d �: %d \n", N, resultado);
    }

    return 0;
}
