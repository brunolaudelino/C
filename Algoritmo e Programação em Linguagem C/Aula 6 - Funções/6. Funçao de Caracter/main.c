#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Crie uma função que determine se dado carctere esta entre "a" e "z" DICA: Use a tabela ASCII.*/
int entreAeZ(char carctere)
{
    return (carctere >= 'a' && carctere <='z');
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char c;
    printf("Digite um caractere: \n");
    scanf("%c", &c);

    if (entreAeZ(c))
    {
        printf("O Caractere %c esta entre 'a' e 'z' . \n", c);
    }
    else
    {
        printf("O Caractere %c não esta entre 'a' e 'z' . ", c);
    }
    return 0;
}
