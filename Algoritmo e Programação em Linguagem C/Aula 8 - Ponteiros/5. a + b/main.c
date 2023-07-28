#include <stdio.h>
#include <locale.h>
/*Escreva um programa que contenha duas vari�veis inteiras "a" e "b" e um ponteiro para inteiro "p".
Atribua os valores 10 e 20 �s vari�veis "a" e "b", respectivamente. Em seguida, fa�a com que o ponteiro "p" aponte para a
vari�vel "a". A seguir, modifique o valor da vari�vel apontada por "p" para que seja o dobro do valor original.
Por fim, imprima na tela os valores das vari�veis "a" e "b"*/
int main() {
    int a, b;
    int *p;

    a = 10;
    b = 20;

    p = &a; // O ponteiro p aponta para o endere�o de mem�ria da vari�vel a
    *p = *p * 2; // Modificando o valor da vari�vel apontada por p para o dobro do valor original

    printf("Valor de a: %d\n", a); // Imprime o valor de a ap�s a modifica��o
    printf("Valor de b: %d\n", b); // Imprime o valor de b, que permanece inalterado

    return 0;
}
