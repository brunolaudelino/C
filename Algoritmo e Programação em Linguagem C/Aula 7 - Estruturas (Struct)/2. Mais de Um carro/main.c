#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Defini��o da estrutura Carro
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

        printf("Digite o ano de fabrica��o do carro: ");
        scanf("%d", &carros[i].anoFabricacao);

        printf("Digite a cor do carro: ");
        scanf(" %[^\n]", carros[i].cor);

        printf("Digite o pre�o do carro: ");
        scanf("%f", &carros[i].preco);
    }

    // Impress�o do relat�rio com os dados de todos os carros registrados
    printf("\n--- Relat�rio de Carros ---\n");
    for (int i = 0; i < numCarros; i++) {
        printf("\nCarro %d:\n", i + 1);
        printf("Marca: %s\n", carros[i].marca);
        printf("Ano de Fabrica��o: %d\n", carros[i].anoFabricacao);
        printf("Cor: %s\n", carros[i].cor);
        printf("Pre�o: R$ %.2f\n", carros[i].preco);
    }

    return 0;
}
