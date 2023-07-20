#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float metros, milimetros;
    printf("Digite o valor em metros: \n");
    scanf("%f", &metros);

    milimetros = metros * 1000;

    printf("O valor fica em %.2f milimetros \n", milimetros);

    return 0;
}
