#include <stdio.h>

void exibirTelaAbertura() {
    printf("------------------------------\n");
    printf("       Bem-vindo � ACME       \n");
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
    printf("Selecione a opera��o desejada:\n");
    printf("1. Adicionar usu�rio\n");
    printf("2. Remover usu�rio\n");
    printf("3. Editar usu�rio\n");
    printf("4. Visualizar usu�rios\n");
    printf("5. Sair\n");
}

int main() {
    exibirTelaAbertura();
    exibirOpcoes();

    int opcao;
    printf("Digite o n�mero da opera��o desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Voc� selecionou a op��o de adicionar usu�rio.\n");
            break;
        case 2:
            printf("Voc� selecionou a op��o de remover usu�rio.\n");
            break;
        case 3:
            printf("Voc� selecionou a op��o de editar usu�rio.\n");
            break;
        case 4:
            printf("Voc� selecionou a op��o de visualizar usu�rios.\n");
            break;
        case 5:
            printf("Voc� selecionou a op��o de sair.\n");
            break;
        default:
            printf("Op��o inv�lida!\n");
            break;
    }

    return 0;
}
