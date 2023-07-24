#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Em dada turma há dez alunos, e cada um realizou tres provas. Calclule a média de cada aluno e a média da turma*/

#define ALUNOS 10
#define PROVAS 3
int main()
{
    setlocale(LC_ALL, "portuguese");
    int notas[ALUNOS][PROVAS];
    float mediaaluno[ALUNOS];
    float mediaturma = 0;

    for (int i = 0; i < ALUNOS; i++)//Leitura
    {
        printf("Digite as notas do aluno %d: \n", i + 1);
        for (int j = 0; j < PROVAS;j ++)
        {
            printf("Prova %d: ", j + 1);
            scanf("%d", &notas[i][j]);
        }
    }
    for (int i = 0; i < ALUNOS; i++)//calculo
    {
        int soma = 0;
        for (int j = 0; j < PROVAS; j++)
        {
            soma += notas[i][j];
        }
        mediaaluno[i] = (float)soma / PROVAS;
    }
    //media turma
    for (int i = 0; i < ALUNOS; i++)
    {
        mediaturma += mediaaluno[i];
    }
    mediaturma /= ALUNOS;

    //exibição
    printf("\n Média de Cada Aluno: \n");

    for (int i = 0; i < ALUNOS; i++)
    {
        printf("Aluno %d: %.2f\n", i + 1, mediaaluno[i]);
    }
    printf("\n Média da Turma: %.2f\n", mediaturma);

    return 0;
}
