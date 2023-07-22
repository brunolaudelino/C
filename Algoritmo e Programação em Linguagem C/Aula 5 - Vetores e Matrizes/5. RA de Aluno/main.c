#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que cadastre um aluno a partir de seu RA(Registro Acadêmico), nome e de três notas.
Em seguinda, gere um relatório na tela com essas informações na ordem em que foram digitadas.*/

#define MAX_ALUNOS 100

struct Aluno
{
    int ra;
    char nome[50];
    float notas[3];
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct Aluno alunos[MAX_ALUNOS];
    int totalAlunos = 0;

    char continuarCadastro;

    do {
        printf("Digite o RA do aluno: ");
        scanf("%d", &alunos[totalAlunos].ra);

        printf("Digite o nome do aluno: ");
        scanf(" %[^\n]", alunos[totalAlunos].nome);

        for (int i = 0; i < 3; i++) {
            printf("Digite a nota %d do aluno: ", i + 1);
            scanf("%f", &alunos[totalAlunos].notas[i]);
        }

        totalAlunos++;

        printf("Deseja cadastrar outro aluno? (S/N): ");
        scanf(" %c", &continuarCadastro);
    } while (totalAlunos < MAX_ALUNOS && (continuarCadastro == 'S' || continuarCadastro == 's'));

    // Exibindo o relatório dos alunos cadastrados
    printf("\nRelatório dos Alunos Cadastrados:\n");
    printf("--------------------------------\n");
    for (int i = 0; i < totalAlunos; i++) {
        printf("RA: %d\n", alunos[i].ra);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Notas: %.1f, %.1f, %.1f\n", alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2]);
        printf("--------------------------------\n");
    }

    return 0;
}
