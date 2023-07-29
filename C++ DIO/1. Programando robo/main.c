#include <stdio.h>
#include <math.h>

int main() {
  int largura, comprimento, area;
  float tempo;

  scanf("%d", &largura);
  scanf("%d", &comprimento);

  //TODO: Calcular a área do local e o tempo que o robo levará para limpá-lo.

  area = largura*comprimento;
  tempo = (float) area/5;

  //TODO: Imprimir a saída de acordo com o enunciado deste desafio.

  printf("O robô de limpeza levará %.0f minutos para limpar a sala.", ceil(tempo));

  return 0;
}
