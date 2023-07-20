#include <stdio.h>
#include <locale.h>
//Escreva um programa que solicite ao usuario tres numeros inteiros a, b e c, em que a seja maior que 1.
//O programa deve somar todos os numeros inteiros entre b e cque sejam divisiveis  por a .
int main()
{
    setlocale(LC_ALL, "portuguese");
    int a, b, c;
    int soma = 0;

    printf("Digite três números inteiros (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Verifica se a é maior que 1
    if (a <= 1)
        {
        printf("O valor de 'a' deve ser maior que 1.\n");
        return 0;
        }

    // Verifica se b é menor que c
    if (b > c)
        {
        printf("O valor de 'b' deve ser menor ou igual a 'c'.\n");
        return 0;
        }

    // Calcula a soma dos números divisíveis por 'a' entre 'b' e 'c'
    for (int i = b; i <= c; i++)
        {
        if (i % a == 0)
            {
            soma += i;
            }
        }

    printf("A soma dos números divisíveis por %d entre %d e %d é: %d\n", a, b, c, soma);

    return 0;
}
