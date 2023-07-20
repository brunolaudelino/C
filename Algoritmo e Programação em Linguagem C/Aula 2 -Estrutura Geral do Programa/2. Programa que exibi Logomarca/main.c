#include <stdio.h>

void exibirTelaAbertura() {
    printf("------------------------------\n");
    printf("       Bem-vindo à ACME       \n");
    printf("------------------------------\n");
    printf("        _.-'~~~~~~`-._        \n");
    printf("       /      ||      \\       \n");
    printf("      /       ||       \\      \n");
    printf("     |        ||        |     \n");
    printf("     | _______||_______ |     \n");
    printf("     |/ ----- \\|/ ----- \\|    \n");
    printf("    `\\       /\\       /'     \n");
    printf("      |      ||      |       \n");
    printf("      |______||______|       \n");
    printf("      |      ||      |       \n");
    printf("      |______||______|       \n");
    printf("      |      ||      |       \n");
    printf("      |______||______|       \n");
    printf("      |      ||      |       \n");
    printf("     _|______||______|_      \n");
    printf("    (________||________)     \n");
    printf("------------------------------\n");
}

void exibirOpcoes() {
    printf("Selecione a operação desejada:\n");
    printf("1. Adicionar usuário\n");
    printf("2. Remover usuário\n");
    printf("3. Editar usuário\n");
    printf("4. Visualizar usuários\n");
    printf("5. Sair\n");
}

int main() {
    exibirTelaAbertura();
    exibirOpcoes();

    int opcao;
    printf("Digite o número da operação desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Você selecionou a opção de adicionar usuário.\n");
            break;
        case 2:
            printf("Você selecionou a opção de remover usuário.\n");
            break;
        case 3:
            printf("Você selecionou a opção de editar usuário.\n");
            break;
        case 4:
            printf("Você selecionou a opção de visualizar usuários.\n");
            break;
        case 5:
            printf("Você selecionou a opção de sair.\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
