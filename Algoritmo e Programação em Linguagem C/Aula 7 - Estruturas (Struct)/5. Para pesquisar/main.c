#include <stdio.h>
#include <string.h>

// Defini��o da estrutura Endereco
struct Endereco {
    char rua[50];
    char cidade[50];
    char estado[3];
};

// Defini��o da estrutura Pessoa, que possui a estrutura Endereco aninhada
struct Pessoa {
    char nome[50];
    int idade;
    struct Endereco endereco; // Estrutura Endereco aninhada
};

int main() {
    struct Pessoa pessoa1;

    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa1.nome);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa1.idade);

    printf("Digite a rua do endere�o: ");
    scanf("%s", pessoa1.endereco.rua);

    printf("Digite a cidade do endere�o: ");
    scanf("%s", pessoa1.endereco.cidade);

    printf("Digite o estado do endere�o: ");
    scanf("%s", pessoa1.endereco.estado);

    // Exibindo os dados da pessoa
    printf("\nDados da Pessoa:\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Endere�o: %s, %s - %s\n", pessoa1.endereco.rua, pessoa1.endereco.cidade, pessoa1.endereco.estado);

    return 0;
}
