#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Escreva um programa que calcule a area de um circulo  a partir de uma fun��o especialmente desenhada para isso.
essa fun��o recebe o valor do raio e retorna a area do circulo
*/
#define PI 3.14156
float calcularArea (float raio)
{
    if (raio <= 0 )
    {
        printf("O n�mero deve ser maior que zero; \n");
        return -1;
    }
    else
    {
    float area = PI * (raio*raio);
    return area;
    }

}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float raio;

    printf("Digite o valor do raio : \n");
    scanf("%f", &raio);

    float resultado = calcularArea(raio);
    if (resultado != -1)
    {
    printf("O valor da area do circulo �: %.2f", resultado);
    }
    return 0;
}
