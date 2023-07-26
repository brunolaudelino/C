#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Vamos criar uma estrutura chamada "Aluno" que descreve os dados de um estudante, com os seguintes campos:

Nome do aluno (string com até 50 caracteres)
Matrícula do aluno (inteiro)
Nota da primeira prova (float)
Nota da segunda prova (float)
Nota da terceira prova (float)
Escreva um programa que utilize essa estrutura para cadastrar os dados de um aluno e em seguida exiba um relatório
com o nome do aluno, a matrícula e a média das três provas.*/

struct Aluno
{
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
    float nota3;
};
int main()
{
    setlocale(LC_ALL, "Portuguese");
    struct Aluno aluno1;

    printf("Digite o nome do Aluno: \n");
    scanf(" %[^\n]", aluno1.nome);

    printf("Digite a matricula do Aluno %s\n", aluno1.nome);
    scanf("%d", &aluno1.matricula);

    printf("Digite a primeira nota do Aluno:\n");
    scanf("%f", &aluno1.nota1);

    printf("Digite a segunda nota do Aluno: \n");
    scanf("%f", &aluno1.nota2);

    printf("Digite a terceira nota do Aluno:\n");
    scanf("%f", &aluno1.nota3);

    printf("--- Nota do Aluno ---\n");

    float media = (aluno1.nota1 + aluno1.nota2 + aluno1.nota3) / 3;
    printf("\n");
    printf("Verificamos que o Aluno %s de matrícula %d obteve uma média de %.2f em suas avaliações\n", aluno1.nome, aluno1.matricula, media);

    return 0;
}
