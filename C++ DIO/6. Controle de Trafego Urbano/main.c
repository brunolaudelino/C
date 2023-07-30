#include <stdio.h>
#include <math.h>

int mediaVeiculosHora(int tamanho, int veiculos[]) {
    int i, soma = 0;
    for (i = 0; i < tamanho; i++) { soma += veiculos[i]; }
    //TODO: Retornar a média arredondando o valor por meio da função "round".
    return round((double)soma/tamanho);
}

int main() {
    int tamanho, i;
    scanf("%d", &tamanho);
    int veiculos[tamanho];
    for (i = 0; i < tamanho; i++) { scanf("%d", &veiculos[i]); }
    //TODO: Chamar a função "mediaVeiculosHora" e imprimir a saída de acordo com o enunciado.
    int media = mediaVeiculosHora(tamanho, veiculos);
    printf("Média de veículos por hora: %d", media);
    return 0;
}
