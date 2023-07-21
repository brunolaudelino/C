#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*O IMC
Pode ser calculado dividindo o peso da pessoa pela altura elevada ao quadrado .
Escreva um programa que leia o peso e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que
o individuo se enquadra de acordo com a tabela*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    float massa, altura, imc;

    printf("Digite seu peso e sua Altura: \n");
    scanf("%f %f", &massa, &altura);

    imc = massa / (altura * altura);

    if (imc < 18.5)
        printf("IMC : %f \t Abaixo do Peso\n", imc);
    else if (imc >= 18.5 && imc < 25)
    printf("IMC:%f \t Peso normal\n", imc);
    else if (imc >= 25 && imc <30)
    printf("IMC: %f \t Sobrepeso\n", imc);
    else if (imc >= 30 && imc < 35)
    printf("IMC %f \t Obesidade Grau 1\n", imc);
    else if (imc >=35 && imc <40)
    printf("IMC %f \t Obesidade Grau 2\n", imc);
    else
    printf("IMC %f \t Obesidade Grau 3 MORBIDA!!!\n", imc);

    return 0;
}
