#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que leia tr�s n�meros do teclado e os imprima na tela na ordem inversa da entrada.
int main()
{
    setlocale(LC_ALL, "portuguese");
    int numeros[3];
    int i;

    printf("Digite tr�s n�meros !\n");

    for (i = 0; i < 3 ; i++)
    {
        scanf("%d", &numeros[i]);
    }
    printf("Os n�meros em ordem inversa s�o: \n");
    for (i = 2; i >= 0; i--)
    {
        printf("%d\n", numeros[i]);
    }
    return 0;
}
