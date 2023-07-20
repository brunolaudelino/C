#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Numero pares até 20
int main()
{
    setlocale(LC_ALL, "portuguese");
    int i;
    printf("Os números pares de 1 a 20 \n");

    for (i=2; i <= 20; i ++)
    {
        if (i % 2 == 0)
        {
            printf("%d \n", i );
        }
    }
    return 0;
}
