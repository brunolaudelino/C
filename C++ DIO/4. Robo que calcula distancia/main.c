#include <stdio.h>

char* verificaDistancia(int distancia) {
  if (distancia <= 10) {
    return "O rob� est� pr�ximo!";
  } else {
    return "O rob� est� longe!";
  }
}

int main() {
  int distancia;

  //TODO: Ler a entrada com a fun��o "scanf" e atribuir � "distancia".

  scanf("%d",&distancia);

  //TODO: Tendo em vista a fun��o "verificaDistancia", imprima a sa�da.

  printf("%s",verificaDistancia(distancia));

  return 0;
}
