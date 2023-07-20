#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que informe a categoria de um jogador de futebol,
//Considerando sua idade:infantil(até 13 anos), Juvenil(até 17 anos)
//Ou Senior (acima de 17 anos).
int main()
{
    setlocale(LC_ALL, "portuguese");
    char nome[10];
    int idade;

    printf("Digite o nome do jogador de futebol\n");
    scanf("%s", nome);

    printf("Digite a idade do jogador de futebol\n");
    scanf("%d", &idade);

    if (idade <= 13)
    {
        printf("O jogador %s faz parte do grupo infantil !\n", nome);
    }
    else if (idade <= 17)
    {
        printf("O jogador %s faz parte do grupo juvenil !\n", nome);
    }
    else
    {
        printf("O jogador %s faz parte do grupo sênior !\n", nome);
    }
    printf("Obrigado por responder o questionário\n");

    return 0;
}
