#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura para armazenar os dados de uma pessoa
struct Contato {
    char nome[50];
    char email[50];
    char telefone[20];
};

// Função para exibir o menu de opções
void exibirMenu() {
    printf("\n-- Menu de Opções --\n");
    printf("1 - Cadastrar contato\n");
    printf("2 - Mostrar nome\n");
    printf("3 - Mostrar email\n");
    printf("4 - Mostrar telefone\n");
    printf("0 - Sair\n");
    printf("Digite a opção desejada: ");
}

int main() {
    setlocale(LC_ALL, "portuguese");

    // Criando um array de contatos para armazenar os dados das pessoas
    struct Contato agenda[100];
    int numContatos = 0;

    int opcao;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        // Verificando a opção escolhida pelo usuário
        switch (opcao) {
            case 1:
                if (numContatos < 100) {
                    printf("\nDigite o nome: ");
                    scanf(" %[^\n]", agenda[numContatos].nome);

                    printf("Digite o email: ");
                    scanf(" %[^\n]", agenda[numContatos].email);

                    printf("Digite o telefone: ");
                    scanf(" %[^\n]", agenda[numContatos].telefone);

                    numContatos++;
                    printf("\nContato cadastrado com sucesso!\n");
                } else {
                    printf("\nA agenda está cheia. Não é possível cadastrar mais contatos.\n");
                }
                break;
            case 2:
                printf("\nNomes cadastrados:\n");
                for (int i = 0; i < numContatos; i++) {
                    printf("%s\n", agenda[i].nome);
                }
                break;
            case 3:
                printf("\nEmails cadastrados:\n");
                for (int i = 0; i < numContatos; i++) {
                    printf("%s\n", agenda[i].email);
                }
                break;
            case 4:
                printf("\nTelefones cadastrados:\n");
                for (int i = 0; i < numContatos; i++) {
                    printf("%s\n", agenda[i].telefone);
                }
                break;
            case 0:
                printf("\nEncerrando o programa...\n");
                break;
            default:
                printf("\nOpção inválida! Digite novamente.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
