#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//Escreva um programa que calcule a area de varios circulos de raio r, at� que o usuario digite "n".
#define PI 3.14159
int main()
{
    setlocale(LC_ALL, "portuguese");
    float raio;
    char opcao;
    // Area do Circulo: Area= PI * raio�
    do
    {
        printf("Digite o raio do c�rculo (ou 'n' para sair.\n");
        scanf(" %c", &opcao);
        if (opcao == 'n')
        {
            printf("Encerrando o programa \n");
            break;
        }
            scanf("%f", &raio);

            float area = PI * (raio*raio);
            printf("A �rea do c�rculo � %.2f\n", area);
    }
    while (1);
    return 0;
}
