#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    char letra;
    int ocorrencias = 0;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    printf("Digite a letra que deseja contar: ");
    scanf("%c", &letra);

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == letra) {
            ocorrencias++;
        }
    }

    printf("A letra '%c' ocorre %d vezes na frase.\n", letra, ocorrencias);

    return 0;
}



