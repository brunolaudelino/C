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
    printf("As notas respectivamente são: \n" );
    for (int i = 0; i < 5; i ++) // Exibir as notas (To aprendendo a palhaçada é minha)
    {
        printf("[%.d]\n", notas[i]);
    }
    float media = (float)(notas[0]+ notas [1] + notas [2] + notas [3] + notas [4]) / 5.0 ;
    printf("A média foi: %.2f\n", media);

    if (media >= 7)
        printf("Verificamos que a média foi de %.2f e você esta APROVADO \n", media);
    else if (media >= 5 && media < 7)
        printf("Verificamos que a sua média foi de %.2f e você esta em RECUPERAÇÃO \n ", media);
    else
        printf("Verificamos que sua média foi de %.2f , logo você está REPROVADO \n", media);

    return 0;
}
