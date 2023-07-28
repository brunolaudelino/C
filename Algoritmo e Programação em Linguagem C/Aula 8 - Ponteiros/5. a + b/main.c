#include <stdio.h>
#include <locale.h>
/*Escreva um programa que contenha duas variáveis inteiras "a" e "b" e um ponteiro para inteiro "p".
Atribua os valores 10 e 20 às variáveis "a" e "b", respectivamente. Em seguida, faça com que o ponteiro "p" aponte para a
variável "a". A seguir, modifique o valor da variável apontada por "p" para que seja o dobro do valor original.
Por fim, imprima na tela os valores das variáveis "a" e "b"*/
int main() {
    int a, b;
    int *p;

    a = 10;
    b = 20;

    p = &a; // O ponteiro p aponta para o endereço de memória da variável a
    *p = *p * 2; // Modificando o valor da variável apontada por p para o dobro do valor original

    printf("Valor de a: %d\n", a); // Imprime o valor de a após a modificação
    printf("Valor de b: %d\n", b); // Imprime o valor de b, que permanece inalterado

    return 0;
}
