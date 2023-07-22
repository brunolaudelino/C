#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
/*Escreva um programa que receba uma string de caracteres minusculos a partir do usuario e conte o número de elementos dessa
string, na sequencia, o programa deve converter os carcteres para maiusculos*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    char string[100];
    int contador = 0;

    printf("Digite um caracteres minusculos: \n");
    scanf("%s", string);

    for (int i = 0;string[i] != '\0'; i++)
    {
        contador++;
    }
    for (int i = 0; i < contador; i++)
    {
        string[i] = toupper(string[i]);
    }

    printf("Os caracteres maiusculos são %s ", string);
    return 0;
}
