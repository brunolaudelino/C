#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float g = 9.8; // Acelera��o da gravidade em m/s�
    float t; // Tempo de queda
    float v; // Velocidade de queda

    printf("Digite o tempo de queda (em segundos): ");
    scanf("%f", &t);

    v = g * t;

    printf("A velocidade de queda � %.2f m/s\n", v);

    return 0;
}
