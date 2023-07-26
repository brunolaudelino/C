#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura Carro
struct Carro {
    char marca[30];
    int anoFabricacao;
    char cor[20];
    float preco;
};

int main() {
    setlocale(LC_ALL, "portuguese");
    int numCarros;

    printf("Digite a quantidade de carros que deseja registrar: ");
    scanf("%d", &numCarros);

    // Criando um array de estruturas Carro para armazenar os carros
    struct Carro carros[numCarros];

    // Loop para registrar os carros
    for (int i = 0; i < numCarros; i++) {
        printf("\n--- Registro do Carro %d ---\n", i + 1);

        printf("Digite a marca do carro: ");
        scanf(" %[^\n]", carros[i].marca);

        printf("Digite o ano de fabricação do carro: ");
        scanf("%d", &carros[i].anoFabricacao);

        printf("Digite a cor do carro: ");
        scanf(" %[^\n]", carros[i].cor);

        printf("Digite o preço do carro: ");
        scanf("%f", &carros[i].preco);
    }

    // Impressão do relatório com os dados de todos os carros registrados
    printf("\n--- Relatório de Carros ---\n");
    for (int i = 0; i < numCarros; i++) {
        printf("\nCarro %d:\n", i + 1);
        printf("Marca: %s\n", carros[i].marca);
        printf("Ano de Fabricação: %d\n", carros[i].anoFabricacao);
        printf("Cor: %s\n", carros[i].cor);
        printf("Preço: R$ %.2f\n", carros[i].preco);
    }

    return 0;
}
