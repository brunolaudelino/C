#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
//Fa�a um programa em C que verifique se um n�mero � par ou �mpar. O n�mero deve ser informado pelo usu�rio.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite por gentileza o n�mero de sua escolha\n");
    printf("Para que o programa determine se ele � par ou �mpar :\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d � um n�mero par. \n", num);
    }
    else
    {
        printf("%d � um n�mero �mpar. \n", num);
    }
    return 0;
}
