#include <stdio.h>

int main() {
  float peso, altura;
  char temPelos, ehMamifero;

  scanf("%f", &peso);
  scanf("%f", &altura);

  scanf(" %c", &temPelos);
  scanf(" %c", &ehMamifero);

  if      (peso >= 2000 && altura >= 300)        { printf("O animal � um elefante!");   }
  else if (altura == 150 && ehMamifero == 's')   { printf("O animal � um cavalo!");     }
  else if (temPelos == 's' && ehMamifero == 's') { printf("O animal � um cachorro!");   }
  else if (temPelos == 'n' && ehMamifero == 's') { printf("O animal � uma tartaruga!"); }
  else if (temPelos == 'n' && ehMamifero == 'n') { printf("O animal � uma serpente!");  }
  else    { printf("N�o foi poss�vel classificar o animal!"); }

  return 0;
}
