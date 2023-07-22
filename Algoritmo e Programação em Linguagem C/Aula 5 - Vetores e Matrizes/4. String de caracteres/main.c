#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
/*Escreva um programa que receba uma string de caracteres minusculos a partir do usuario e conte o número de elementos dessa
string, na sequencia, o programa deve converter os carcteres para maiusculos*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    char string[100];
    int tamanho;

    printf("Digite uma string de caracteres minusculos: ");
    scanf("%s ", &string);

    tamanho = strlen(string);

    for (int i = 0; i < tamanho; i++)
    {
        string[i] = toupper(string[i]);
    }

    printf("A string com carcteres maiusculos é : %s \n", string);
    return 0;
}
