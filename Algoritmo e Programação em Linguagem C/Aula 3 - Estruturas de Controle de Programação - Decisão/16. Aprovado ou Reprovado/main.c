#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa em C que leia as notas de três provas de um aluno e calcule a média aritmética.
Em seguida, o programa deve exibir a mensagem "Aprovado" se a média for maior ou igual a 7,
"Reprovado" se a média for menor que 5 ou "Recuperação" se a média estiver entre 5 e 7.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    float nota1, nota2, nota3, media;

    printf("Digite as três notas do aluno: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media > 7)
        printf("O aluno esta aprovado com média %.2f\n", media);
    else if (media >= 5 && media <= 7)
        printf("O aluno recebeu nota %.2f e infelizmete estará em recuperação\n", media);
    else
        printf("O aluno esta reprovado, recebeu uma nota %.2f e não irá para proxima fase\n", media);
    return 0;
}
