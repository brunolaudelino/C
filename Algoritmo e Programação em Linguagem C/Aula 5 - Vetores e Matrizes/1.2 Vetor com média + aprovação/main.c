#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int notas[5];

    for (int i = 0; i < 5 ; i ++)//Le as 5 notas do aluno
    {
        printf("Digite as nota %d do aluno: \n", i + 1);
        scanf("%d", &notas[i]);
    }
    printf("As notas respectivamente s�o: \n" );
    for (int i = 0; i < 5; i ++) // Exibir as notas (To aprendendo a palha�ada � minha)
    {
        printf("[%.d]\n", notas[i]);
    }
    float media = (float)(notas[0]+ notas [1] + notas [2] + notas [3] + notas [4]) / 5.0 ;
    printf("A m�dia foi: %.2f\n", media);

    if (media >= 7)
        printf("Verificamos que a m�dia foi de %.2f e voc� esta APROVADO \n", media);
    else if (media >= 5 && media < 7)
        printf("Verificamos que a sua m�dia foi de %.2f e voc� esta em RECUPERA��O \n ", media);
    else
        printf("Verificamos que sua m�dia foi de %.2f , logo voc� est� REPROVADO \n", media);

    return 0;
}
