#include <stdio.h>
#include <string.h>

int main() {
  char mensagem[100];

  //O padr�o "%[^\n]" l� o texto digitado at� a tecla "enter", armazenando o texto na vari�vel.

  scanf("%[^\n]", mensagem);

  char* palavra = strtok(mensagem, " ");

  while (palavra) {
    if (palavra) printf("%s %s ",palavra,palavra);
    palavra = strtok(NULL, " ");
  }

  return 0;
}
