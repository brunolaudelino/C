#include <stdio.h>
#include <math.h>

int main() {
  int largura, comprimento, area;
  float tempo;

  scanf("%d", &largura);
  scanf("%d", &comprimento);

  //TODO: Calcular a �rea do local e o tempo que o robo levar� para limp�-lo.

  area = largura*comprimento;
  tempo = (float) area/5;

  //TODO: Imprimir a sa�da de acordo com o enunciado deste desafio.

  printf("O rob� de limpeza levar� %.0f minutos para limpar a sala.", ceil(tempo));

  return 0;
}
