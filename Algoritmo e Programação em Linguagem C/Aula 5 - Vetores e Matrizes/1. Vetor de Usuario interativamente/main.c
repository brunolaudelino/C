#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que receba do usuario (interativamente) três notas para dado aluno,
armazenando-as em um vetor, em seguida o programa deve imprimir na tela tais notas.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int notas[3]; //declarar o vetor e as 3 notas

    //Le as notas
    for (int i = 0; i < 3 ; i ++)
    {
        printf("Digite a nota: %d: \n", i + 1);
        scanf("%d", &notas[i]);
    }

    ("As notas são: ");
    for (int i = 0; i < 3; i ++)
    {
        printf("%d\n"), notas[i];
    }
    printf("\n");
    return 0;
}
