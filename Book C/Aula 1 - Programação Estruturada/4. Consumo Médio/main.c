#include <stdio.h>

int main()
{
    float distancia, combustivel, consumo_medio;

    printf("Digite a dist�ncia total percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Digite o total de combust�vel gasto (em litros): ");
    scanf("%f", &combustivel);

    consumo_medio = distancia / combustivel;

    printf("O consumo m�dio do autom�vel �: %.2f km/l\n", consumo_medio);

    return 0;
}
