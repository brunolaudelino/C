#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tabuada = 5;

    printf("A Tabuada de %d é:\n", tabuada);

    for (int i = 1; i <=15; i++)
    {
        int resultado = tabuada * i;
        printf("%d X %d = %d \n", tabuada, i, resultado);
    }

    return 0;
}
