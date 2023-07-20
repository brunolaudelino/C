#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float g = 9.8; // Aceleração da gravidade em m/s²
    float t; // Tempo de queda
    float v; // Velocidade de queda

    printf("Digite o tempo de queda (em segundos): ");
    scanf("%f", &t);

    v = g * t;

    printf("A velocidade de queda é %.2f m/s\n", v);

    return 0;
}
