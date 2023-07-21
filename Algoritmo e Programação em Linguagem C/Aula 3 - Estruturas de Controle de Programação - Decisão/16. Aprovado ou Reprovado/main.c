#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa em C que leia as notas de tr�s provas de um aluno e calcule a m�dia aritm�tica.
Em seguida, o programa deve exibir a mensagem "Aprovado" se a m�dia for maior ou igual a 7,
"Reprovado" se a m�dia for menor que 5 ou "Recupera��o" se a m�dia estiver entre 5 e 7.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    float nota1, nota2, nota3, media;

    printf("Digite as tr�s notas do aluno: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media > 7)
        printf("O aluno esta aprovado com m�dia %.2f\n", media);
    else if (media >= 5 && media <= 7)
        printf("O aluno recebeu nota %.2f e infelizmete estar� em recupera��o\n", media);
    else
        printf("O aluno esta reprovado, recebeu uma nota %.2f e n�o ir� para proxima fase\n", media);
    return 0;
}
