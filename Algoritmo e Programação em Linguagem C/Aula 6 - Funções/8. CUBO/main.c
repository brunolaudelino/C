    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
  /* Fun��o que retorna o cubo do valor passado como argumento */
int cubo(int num) {
    return num * num * num;
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int num;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    int resultado = cubo(num);

    printf("O cubo de %d � %d\n", num, resultado);

    return 0;
}
