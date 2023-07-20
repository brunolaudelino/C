#include <stdio.h>
#include <locale.h>
//Escreva um programa que solicite ao usuario tres numeros inteiros a, b e c, em que a seja maior que 1.
//O programa deve somar todos os numeros inteiros entre b e cque sejam divisiveis  por a .
int main()
{
    setlocale(LC_ALL, "portuguese");
    int a, b, c;
    int soma = 0;

    printf("Digite tr�s n�meros inteiros (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Verifica se a � maior que 1
    if (a <= 1)
        {
        printf("O valor de 'a' deve ser maior que 1.\n");
        return 0;
        }

    // Verifica se b � menor que c
    if (b > c)
        {
        printf("O valor de 'b' deve ser menor ou igual a 'c'.\n");
        return 0;
        }

    // Calcula a soma dos n�meros divis�veis por 'a' entre 'b' e 'c'
    for (int i = b; i <= c; i++)
        {
        if (i % a == 0)
            {
            soma += i;
            }
        }

    printf("A soma dos n�meros divis�veis por %d entre %d e %d �: %d\n", a, b, c, soma);

    return 0;
}
