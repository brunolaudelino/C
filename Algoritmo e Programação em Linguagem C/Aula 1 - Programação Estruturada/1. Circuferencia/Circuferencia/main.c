#include <stdio.h>

#define PI 3.14159

int main()
{
    float raio, comprimento;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    comprimento = 2 * PI * raio;

    printf("O comprimento da circunferência é: %.2f\n", comprimento);

    return 0;
}
