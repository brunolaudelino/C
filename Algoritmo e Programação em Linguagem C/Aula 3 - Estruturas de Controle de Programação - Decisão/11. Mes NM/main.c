#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa para ler um numero inteiro e verificar se corresponde a um mes valido no calendario.
Caso corrensponda, escrever o nome do mes, caso contrario escrever a mensagem "Mes Invalido"*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int mes;

    printf("Digite um número correspondente ao mês: \n");
    scanf("%d", &mes);

    switch(mes)
    {
    case 1:
        printf("Mês Referente: Janeiro \n");
        break;
    case 2:
        printf("Mês Referente: Fevereiro \n");
        break;
    case 3:
        printf("Mês Referente: Março \n");
        break;
    case 4:
        printf("Mês Referente: Abril \n");
        break;
    case 5:
        printf("Mês Referente: Maio \n");
        break;
    case 6:
        printf("Mês Referente: Junho \n");
        break;
    case 7:
        printf("Mês Referente: Julho \n");
        break;
    case 8:
        printf("Mês Referente: Agosto \n");
        break;
    case 9:
        printf("Mês Referente: Setembro \n");
        break;
    case 10:
        printf("Mês Referente: Outubro \n");
        break;
    case 11:
        printf("Mês Referente: Novembro \n");
        break;
    case 12:
        printf("Mês Referente: Dezembro \n");
        break;
    default:
        printf("Mês Inválido");// Não entendi pq esta saindo ...
        break;
    }
    return 0;
}
