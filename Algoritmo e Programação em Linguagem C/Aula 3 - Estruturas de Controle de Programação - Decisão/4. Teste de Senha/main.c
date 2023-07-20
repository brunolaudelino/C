#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//Escreva um programa que teste uma dada senha
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char senhaCorreta[] = "Bruno123"; // Senha correta a ser verificada
    char senhaUsuario[20]; // Senha fornecida pelo usuário

    printf("Digite a senha: ");
    scanf("%s", senhaUsuario);

    if (strcmp(senhaUsuario, senhaCorreta) == 0) {
        printf("Acesso permitido! Senha correta.\n");
    } else {
        printf("Acesso negado! Senha incorreta.\n");
    }

    return 0;
}
