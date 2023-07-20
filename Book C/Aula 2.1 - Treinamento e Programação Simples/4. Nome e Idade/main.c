#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
//Crie um programa em C que leia o nome e a idade de uma pessoa e exiba essas informações na tela.
//by brunolaudelino
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome [50];
    int id;

    printf("Informe seu nome: \n");
    scanf("%s", &nome);

    printf("Informe a sua idade:\n");
    scanf("%d", &id);

    printf("Pelo que sabemos seu nome é %s e você tem apenas %.2d anos\n", nome, id);

    printf("Obrigado por informar os dados\n");
    return 0;
}
