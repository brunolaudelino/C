#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Faça um programa em C que leia a altura e o peso de uma pessoa e calcule o índice de massa corporal (IMC) dela.
//Em seguida, exiba o resultado na tela.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float altura, peso, imc;

    printf("Digite a altura: \n");
    scanf("%f", &altura);

    printf("Digite o peso: \n");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("Calculando os valores informados teremos um IMC de %.2f\n", imc);

    return 0;
}
