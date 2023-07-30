#include <stdio.h>

int maiorDistancia(int n, int posicoesDosRobos[]) {
  // Inicialmente, consideramos que o primeiro rob� � o que percorreu a maior dist�ncia.
  int indiceMaiorDistancia = 0;
  int maiorDistancia = posicoesDosRobos[indiceMaiorDistancia];

  //TODO: Percorrer o array "posicoesDosRobos" para identificar o que mais andou.
  for (int i = 0; i < n; i++) {
    if (maiorDistancia < posicoesDosRobos[i]) {
        indiceMaiorDistancia = i;
        maiorDistancia = posicoesDosRobos[i];
    }
  }
  return indiceMaiorDistancia;
}

int main() {
  int n;
  scanf("%d", &n);
  int posicoesDosRobos[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", & posicoesDosRobos[i]);
  }

  int indiceMaiorDistancia = maiorDistancia(n, posicoesDosRobos);

  // Adicionamos 1 ao �ndice para apresentar o resultado de acordo com a conven��o humana de come�ar a contar a partir de 1.
  printf("O rob� que percorreu a maior dist�ncia � o rob� %d\n", indiceMaiorDistancia + 1);

  return 0;
}
