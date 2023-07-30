#include <stdio.h>
#include <math.h>

int mediaVeiculosHora(int tamanho, int veiculos[]) {
    int i, soma = 0;
    for (i = 0; i < tamanho; i++) { soma += veiculos[i]; }
    //TODO: Retornar a m�dia arredondando o valor por meio da fun��o "round".
    return round((double)soma/tamanho);
}

int main() {
    int tamanho, i;
    scanf("%d", &tamanho);
    int veiculos[tamanho];
    for (i = 0; i < tamanho; i++) { scanf("%d", &veiculos[i]); }
    //TODO: Chamar a fun��o "mediaVeiculosHora" e imprimir a sa�da de acordo com o enunciado.
    int media = mediaVeiculosHora(tamanho, veiculos);
    printf("M�dia de ve�culos por hora: %d", media);
    return 0;
}
