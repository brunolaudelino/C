#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3;

    printf("Digite o primeiro número: \n");
    scanf("%d", &num1);

    printf("Digite o segundo número: \n");
    scanf("%d", &num2);

    printf("Digite o terceiro número: \n");
    scanf("%d", &num3);

    printf("Agora\n");
    printf("Verificamos que o valores invertidos\n");
    printf("Fica assim ...\n");
    printf("Número %d ,  o número %d e ao final o número %d ...\n", num3, num2, num1);
    printf("Obrigado pela participação\n");
    return 0;
}
