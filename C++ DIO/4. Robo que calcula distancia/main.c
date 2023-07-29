#include <stdio.h>

char* verificaDistancia(int distancia) {
  if (distancia <= 10) {
    return "O robô está próximo!";
  } else {
    return "O robô está longe!";
  }
}

int main() {
  int distancia;

  //TODO: Ler a entrada com a função "scanf" e atribuir à "distancia".

  scanf("%d",&distancia);

  //TODO: Tendo em vista a função "verificaDistancia", imprima a saída.

  printf("%s",verificaDistancia(distancia));

  return 0;
}
