#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num1, num2,soma;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &num1);

    printf("Digite o segundo valor: \n");
    scanf("%d", &num2);

    soma = num1 + num2;

    while (soma >= 0)
    {
        printf("A soma dos dois numeros é %d\n", soma);
        break;
    }
    if (soma< 0)
    {
        printf("Não foi possivel realizar essa ação !\n");
    }

    return 0;
}
