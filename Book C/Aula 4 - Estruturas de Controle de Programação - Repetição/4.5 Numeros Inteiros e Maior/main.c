#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;
    int maiornum = -1;

    while (1)
    {
        printf("Digite um n�mero inteiro \n Para encerrar basta colocar um numero negativo...");
        scanf("%d", &num);
        if (num >= 0)
        {
            if (num> maiornum)
            {
            printf("Continue digitando os numeros");
            maiornum = num;
            }
        }
        else
        {
            printf("O n�mero informado � negativo, tarefa finalizada");
            break;
        }
    }

    printf("O maior n�mero digitado �: %d\n", maiornum);
    printf("\n");
    printf("Obrigado por participar do programa ! ");
    return 0;
}
