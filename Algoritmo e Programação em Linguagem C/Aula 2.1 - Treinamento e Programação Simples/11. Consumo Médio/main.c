#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que calcule o consumo medio de um automovel
//sao fornecidos a distancia total percorrida e o total de combustivel gasto.
int main()
{
    setlocale(LC_ALL, "portuguese");
    float consumoMedio, distancia, combustivelgasto;

    printf("Digite a dist�ncia total percorrida do autom�vel:   \n");
    scanf("%f", &distancia);

    printf("Digite o total do combust�vel gasto durante a viagem:   \n");
    scanf("%f", &combustivelgasto);

    consumoMedio = distancia / combustivelgasto;

    printf("O consumo m�dio da viagem foi de %.2f quilometros por minuto !\n", consumoMedio);

    return 0;
}
