#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    // Leitura da temperatura em Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Convers�o para Fahrenheit
    fahrenheit = (9 * celsius + 160) / 5;

    // Exibi��o do resultado
    printf("A temperatura em graus Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
