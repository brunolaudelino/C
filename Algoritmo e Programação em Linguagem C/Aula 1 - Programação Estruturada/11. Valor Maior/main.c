#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    if (valor1 > valor2) {
        printf("O maior valor é: %d\n", valor1);
    } else if (valor2 > valor1) {
        printf("O maior valor é: %d\n", valor2);
    } else {
        printf("Os valores são iguais.\n");
    }

    return 0;
}
