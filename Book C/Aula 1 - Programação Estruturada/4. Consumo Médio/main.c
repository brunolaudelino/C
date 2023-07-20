#include <stdio.h>

int main()
{
    float distancia, combustivel, consumo_medio;

    printf("Digite a distância total percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Digite o total de combustível gasto (em litros): ");
    scanf("%f", &combustivel);

    consumo_medio = distancia / combustivel;

    printf("O consumo médio do automóvel é: %.2f km/l\n", consumo_medio);

    return 0;
}
