#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Crie uma fun��o chamada ehPrimo que receba um n�mero inteiro como par�metro e verifique se ele � um n�mero primo.
A fun��o deve retornar 1 se o n�mero for primo ou 0 caso contr�rio. No programa principal,
leia um n�mero digitado pelo usu�rio e chame a fun��o para verificar se � primo. Imprima uma mensagem indicando o resultado.*/
// Fun��o para verificar se um n�mero � primo
int ehPrimo(int num) {
    if (num <= 1) {
        return 0; // N�meros menores ou iguais a 1 n�o s�o primos
    }

    // Percorre os n�meros de 2 at� a raiz quadrada do n�mero
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Se encontrar algum divisor, o n�mero n�o � primo
        }
    }

    return 1; // Se n�o encontrou nenhum divisor, o n�mero � primo
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    int resultado = ehPrimo(num);

    if (resultado == 1) {
        printf("%d � um n�mero primo.\n", num);
    } else {
        printf("%d n�o � um n�mero primo.\n", num);
    }

    return 0;
}
