#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que calcule o consumo medio de um automovel
//sao fornecidos a distancia total percorrida e o total de combustivel gasto.
int main()
{
    setlocale(LC_ALL, "portuguese");
    float consumoMedio, distancia, combustivelgasto;

    printf("Digite a distância total percorrida do automóvel:   \n");
    scanf("%f", &distancia);

    printf("Digite o total do combustível gasto durante a viagem:   \n");
    scanf("%f", &combustivelgasto);

    consumoMedio = distancia / combustivelgasto;

    printf("O consumo médio da viagem foi de %.2f quilometros por minuto !\n", consumoMedio);

    return 0;
}
