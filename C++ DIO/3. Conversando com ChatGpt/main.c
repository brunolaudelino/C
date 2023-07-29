#include <stdio.h>
#include <string.h>

int main() {
  char mensagem[100];

  //O padrão "%[^\n]" lê o texto digitado até a tecla "enter", armazenando o texto na variável.

  scanf("%[^\n]", mensagem);

  char* palavra = strtok(mensagem, " ");

  while (palavra) {
    if (palavra) printf("%s %s ",palavra,palavra);
    palavra = strtok(NULL, " ");
  }

  return 0;
}
