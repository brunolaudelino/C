#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3;

    printf("Digite o primeiro n�mero: \n");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: \n");
    scanf("%d", &num2);

    printf("Digite o terceiro n�mero: \n");
    scanf("%d", &num3);

    printf("Agora\n");
    printf("Verificamos que o valores invertidos\n");
    printf("Fica assim ...\n");
    printf("N�mero %d ,  o n�mero %d e ao final o n�mero %d ...\n", num3, num2, num1);
    printf("Obrigado pela participa��o\n");
    return 0;
}
