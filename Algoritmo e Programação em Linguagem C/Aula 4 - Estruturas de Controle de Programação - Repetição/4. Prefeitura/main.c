-
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario, mediaSalario, maiorSalario, somaSalario = 0;
    int numFilhos, totalHabitantes = 0, totalFilhos = 0, totalSalarioAte100 = 0;

    printf("Digite o sal�rio do habitante (ou um valor negativo para encerrar): ");
    scanf("%f", &salario);

    maiorSalario = salario; // Considera o primeiro sal�rio como o maior

    while (salario >= 0)
    {
        printf("Digite o n�mero de filhos do habitante: ");
        scanf("%d", &numFilhos);

        somaSalario += salario;
        totalHabitantes++;
        totalFilhos += numFilhos;

        if (salario <= 100.0) {
            totalSalarioAte100++;
        }

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        printf("Digite o sal�rio do pr�ximo habitante (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);
    }

    if (totalHabitantes > 0)
        {
        mediaSalario = somaSalario / totalHabitantes;
        printf("A m�dia do sal�rio da popula��o �: %.2f\n", mediaSalario);
        printf("A m�dia do n�mero de filhos �: %.2f\n", (float)totalFilhos / totalHabitantes);
        printf("O maior sal�rio �: %.2f\n", maiorSalario);
        printf("O percentual de pessoas com sal�rio at� R$100,00 �: %.2f%%\n", (float)totalSalarioAte100 / totalHabitantes * 100);
        } else {
        printf("Nenhum dado foi fornecido.\n");
    }

    return 0;
}
