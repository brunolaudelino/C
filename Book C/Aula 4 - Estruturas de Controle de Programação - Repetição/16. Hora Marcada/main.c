#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*fa�a um programa para ler os segundos e transformar em hora, minutos e segundos...*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int segundos, h, resto, m, s;

    printf("Digite a quantidade de segundo que ser� contabilizada: \n");
    scanf("%d", &segundos);

    h = segundos / 3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;

    printf("Temos um hor�rio de %d : %d: %d: \n", h, m, s);
    return 0;
}
