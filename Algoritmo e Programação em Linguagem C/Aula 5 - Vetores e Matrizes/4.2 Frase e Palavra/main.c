#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[1000];
    char palavra[100];
    int contador_ocorrencias = 0;

    printf("Digite uma frase: ");
    gets(frase);

    printf("Digite a palavra a ser buscada na frase: ");
    scanf("%s", palavra);

    // Converte a frase e a palavra para letras minúsculas (ou maiúsculas)
    for (int i = 0; frase[i] != '\0'; i++) {
        frase[i] = toupper(frase[i]);
    }
    for (int i = 0; palavra[i] != '\0'; i++) {
        palavra[i] = toupper(palavra[i]);
    }

    // Busca a palavra na frase e conta o número de ocorrências
    char *ptr = strstr(frase, palavra);
    while (ptr != NULL) {
        contador_ocorrencias++;
        ptr = strstr(ptr + 1, palavra); // Avança para a próxima ocorrência da palavra na frase
    }

    printf("A palavra '%s' aparece %d vez(es) na frase.\n", palavra, contador_ocorrencias);

    return 0;
}
//Esse código ainda não consegui fazer sozinho , consegui montar até o for ...
