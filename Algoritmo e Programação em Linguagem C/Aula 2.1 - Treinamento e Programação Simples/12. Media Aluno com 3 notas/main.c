#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que leia o nome de um aluno e as notas que ele obteve
//nas tres provas do semestre. No final, o programa deve informar
//o nome do aluno e a sua média aritmética.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[20];
    float nota1, nota2, nota3, media;

    printf("Digite o nome do aluno: \n");
    scanf("%s", nome);

    printf("Digite a primeira nota de %s :\n", nome);
    scanf("%f", &nota1);

    printf("Digite a segunda nota de %s :\n", nome);
    scanf("%f", &nota2);

    printf("Digite a terceira nota de %s :\n", nome);
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/ 3;

    printf("De acordo com as notas obtidas, %s teve uma média de %f em seu semestre . \n", nome, media);
    printf("Obrigado por utilizar o programa ! . . . ...\n");

    return 0;
}
