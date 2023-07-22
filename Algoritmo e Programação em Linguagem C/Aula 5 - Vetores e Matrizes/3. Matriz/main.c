#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Como seria uma matriz que representa os assentos de uma aeronave ?
Quais seriam as manipulações dessa matriz, emum sistema de reserva e compra de
passagens aéreas?*/

/* A principio montei esse codigo com a ajuda dos chat porem não é cópia não sermos ignorantes*/
#define LINHAS 4// Seria os bancos
#define COLUNAS 10// Seria as fileiras

//Função para exibir os Assentos disponiveis
void exibirAssentos(int assentos[LINHAS][COLUNAS])
{
    printf("Assentos Disponíveis: \n   ");
    for (int i = 0; i < LINHAS; i ++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            if(assentos[i][j] == 0)
            {
                printf("%c%d \t", 'A' + i, j + 1);
            }
            else
            {
                printf("X \n");
            }
        }
        printf("\n");
    }

}
//Função para reservar um assento
void reservarAssento(int assentos[LINHAS][COLUNAS], int linha, int coluna)
{
    if (assentos[linha][coluna] == 0)
    {
        assentos[linha][coluna] = 1;
        printf("Assento %c%d reservado com sucesso !\n", 'A'+ linha, coluna + 1);
    }
    else
    {
        printf("Assento indisponível !\n");
    }
}
//Função para cancelar a reserva de um assento
void cancelarReserva (int assentos[LINHAS][COLUNAS], int linha, int coluna)
{
    if (assentos[linha][coluna] == 1)
    {
        assentos[linha][coluna] = 0;
        printf("Reserva do assento %c%d com sucesso !\n", 'A' + linha, coluna + 1);
    }
    else
    {
        printf("Assento não está reservado ! \n");
    }
}
int main()
{
    //Inicializa os assentos com zero, ou seja vazios.
    setlocale(LC_ALL, "portuguese");
    int assentos[LINHAS][COLUNAS] = {0};

    char opcao;
    int linha, coluna;
    while (1)
    {
        exibirAssentos(assentos);
        printf("\n");
        printf("Digite 'R' para reservar um Assento: \n");
        printf("Digite 'C' para cancelar uma Reserva: \n");
        printf("Ou digite 'S' para Sair do programa:\n");
        printf("\n");
        scanf(" %c", &opcao);

        if (opcao == 'S' || opcao == 's')
        {
            printf("Encerrando o Programa...\n");
            printf("...\n");
            printf("...\n");
            printf("...\n");
            break;
        }
        printf("Digite a linha do assento (de A a D): \n");
        scanf(" %c", &linha);

        printf("Digite a coluna do assento (de 1 a 10) \n");
        scanf("%d", &coluna);
        //linha = toupper(linha) - 'A';

        coluna--;//Ajusta o valor da coluna para o indice da matriz
    }
        if (linha >= 0 && linha < LINHAS && coluna >= 0 && coluna <= COLUNAS)
        {
            if (opcao == 'R' || opcao == 'r')
            {
                reservarAssento(assentos, linha, coluna);
            }
            else if (opcao == 'C' || opcao == 'c')
            {
                cancelarReserva(assentos, linha, coluna);
            }
            else
            {
                printf("Opção Inválida\n");
            }
        }
        else
        {
            printf("Assento escolhido: Inválido\n");
        }
return 0;

}

//Isso foi o inicio
//O primeiro programa completo, lógico que não fiz sozinho mas ja dei o primeiro passo..
//Contem alguns erros mais conforme vou codando vou aprendendo...
// Feito dia 21/07/2023 Bruno Laudelino
//Santa Maria, Rio Grande do Sul
