#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Crie uma função chamada ehPrimo que receba um número inteiro como parâmetro e verifique se ele é um número primo.
A função deve retornar 1 se o número for primo ou 0 caso contrário. No programa principal,
leia um número digitado pelo usuário e chame a função para verificar se é primo. Imprima uma mensagem indicando o resultado.*/
// Função para verificar se um número é primo
int ehPrimo(int num) {
    if (num <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }

    // Percorre os números de 2 até a raiz quadrada do número
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Se encontrar algum divisor, o número não é primo
        }
    }

    return 1; // Se não encontrou nenhum divisor, o número é primo
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int resultado = ehPrimo(num);

    if (resultado == 1) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}
