#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura para armazenar os dados de uma pessoa
struct Contato {
    char nome[50];
    char email[50];
    char telefone[20];
};

// Função para ler os dados de uma pessoa
void ler_pessoa(struct Contato *pessoa) {
    printf("\nDigite o nome: ");
    scanf(" %[^\n]", pessoa->nome);

    printf("Digite o email: ");
    scanf(" %[^\n]", pessoa->email);

    printf("Digite o telefone: ");
    scanf(" %[^\n]", pessoa->telefone);
}

// Função para exibir os dados de uma pessoa
void mostrar_pessoa(struct Contato pessoa) {
    printf("\nNome: %s\n", pessoa.nome);
    printf("Email: %s\n", pessoa.email);
    printf("Telefone: %s\n", pessoa.telefone);
}

int main() {
    setlocale(LC_ALL, "portuguese");

    // Criando um array de contatos para armazenar os dados das pessoas
    struct Contato agenda[100];
    int numContatos = 0;

    int opcao;

    do {
        printf("\n-- Menu de Opções --\n");
        printf("1 - Cadastrar contato\n");
        printf("2 - Mostrar contatos cadastrados\n");
        printf("0 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        // Verificando a opção escolhida pelo usuário
        switch (opcao) {
            case 1:
                if (numContatos < 100) {
                    ler_pessoa(&agenda[numContatos]);
                    numContatos++;
                    printf("\nContato cadastrado com sucesso!\n");
                } else {
                    printf("\nA agenda está cheia. Não é possível cadastrar mais contatos.\n");
                }
                break;
            case 2:
                printf("\nContatos cadastrados:\n");
                for (int i = 0; i < numContatos; i++) {
                    mostrar_pessoa(agenda[i]);
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
