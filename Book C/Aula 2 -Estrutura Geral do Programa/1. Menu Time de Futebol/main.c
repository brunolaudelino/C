#include <stdio.h>

int main() {
    int opcao;

    printf("Bem-vindo ao Menu de Times de Futebol!\n");
    printf("Escolha o seu time favorito:\n");
    printf("1. Barcelona\n");
    printf("2. Real Madrid\n");
    printf("3. Manchester United\n");
    printf("4. Juventus\n");
    printf("5. Bayern de Munique\n");

    printf("Digite o número correspondente ao time: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Você escolheu o Barcelona!\n");
            break;
        case 2:
            printf("Você escolheu o Real Madrid!\n");
            break;
        case 3:
            printf("Você escolheu o Manchester United!\n");
            break;
        case 4:
            printf("Você escolheu a Juventus!\n");
            break;
        case 5:
            printf("Você escolheu o Bayern de Munique!\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
