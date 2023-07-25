#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa em C que receba um valor inteiro positivo N do usuário e
 calcule o fatorial desse número utilizando uma função recursiva. Em seguida, exiba o resultado na tela.*/
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

    printf("Digite um número inteiro não negativo: \n");
    scanf("%d", &N);

    if (N < 0)
    {
        printf("O número deve ser não negativo.\n");
    }
    else
    {
        int resultado = fatorial(N);
        printf("O fatorial de %d é: %d \n", N, resultado);
    }

    return 0;
}
