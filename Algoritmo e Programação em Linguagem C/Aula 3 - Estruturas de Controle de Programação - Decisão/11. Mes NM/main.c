#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa para ler um numero inteiro e verificar se corresponde a um mes valido no calendario.
Caso corrensponda, escrever o nome do mes, caso contrario escrever a mensagem "Mes Invalido"*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int mes;

    printf("Digite um n�mero correspondente ao m�s: \n");
    scanf("%d", &mes);

    switch(mes)
    {
    case 1:
        printf("M�s Referente: Janeiro \n");
        break;
    case 2:
        printf("M�s Referente: Fevereiro \n");
        break;
    case 3:
        printf("M�s Referente: Mar�o \n");
        break;
    case 4:
        printf("M�s Referente: Abril \n");
        break;
    case 5:
        printf("M�s Referente: Maio \n");
        break;
    case 6:
        printf("M�s Referente: Junho \n");
        break;
    case 7:
        printf("M�s Referente: Julho \n");
        break;
    case 8:
        printf("M�s Referente: Agosto \n");
        break;
    case 9:
        printf("M�s Referente: Setembro \n");
        break;
    case 10:
        printf("M�s Referente: Outubro \n");
        break;
    case 11:
        printf("M�s Referente: Novembro \n");
        break;
    case 12:
        printf("M�s Referente: Dezembro \n");
        break;
    default:
        printf("M�s Inv�lido");// N�o entendi pq esta saindo ...
        break;
    }
    return 0;
}
