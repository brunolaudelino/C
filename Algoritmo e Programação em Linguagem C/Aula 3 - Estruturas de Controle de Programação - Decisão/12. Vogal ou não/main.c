#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    char letra;

    printf("Digite um caracter: \n");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'A' || letra == 'e' || letra 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U')
        printf("\t Vogal... \n");;
    else
        printf("\t Não é uma vogal... Consoante \n");
    return 0;
}

/* Esse codigo deu ruim, não consegui compilar o mesmo e agora vou dormir ....
qualquer coisa entre em contato
55 (21) 96416-8393 */
