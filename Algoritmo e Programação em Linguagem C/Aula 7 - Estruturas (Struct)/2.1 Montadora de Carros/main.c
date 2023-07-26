#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Carro
{
    char marca[30];
    int anofabricar;
    char cor[20];
    float preco;
};

int main()
{
    setlocale(LC_ALL, "portuguese");
    struct Carro carro1;

    printf("Digite a marca do carro: \n");
    scanf(" %[^\n]", carro1.marca);

    printf("Digite o ano de Fabricação: \n");
    scanf("%d", &carro1.anofabricar);

    printf("Digite a cor do carro: \n");
    scanf(" %[^\n]", carro1.cor);

    printf("Digite o valor do carro: \n");
    scanf("%f", &carro1.preco);

    printf("--- Relatório do Carro ---\n");
    printf("Marca: %s \n", carro1.marca);
    printf("Ano de Fabricação: %d \n", carro1.anofabricar);
    printf("A cor do carro %s é %s\n", carro1.marca, carro1.cor);
    printf("Saindo por um valor de R$: %.2f\n", carro1.preco);
    printf("--- Obrigado por utilizar o programa !\n");

    return 0;
}
