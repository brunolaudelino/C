-
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario, mediaSalario, maiorSalario, somaSalario = 0;
    int numFilhos, totalHabitantes = 0, totalFilhos = 0, totalSalarioAte100 = 0;

    printf("Digite o salário do habitante (ou um valor negativo para encerrar): ");
    scanf("%f", &salario);

    maiorSalario = salario; // Considera o primeiro salário como o maior

    while (salario >= 0)
    {
        printf("Digite o número de filhos do habitante: ");
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

        printf("Digite o salário do próximo habitante (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);
    }

    if (totalHabitantes > 0)
        {
        mediaSalario = somaSalario / totalHabitantes;
        printf("A média do salário da população é: %.2f\n", mediaSalario);
        printf("A média do número de filhos é: %.2f\n", (float)totalFilhos / totalHabitantes);
        printf("O maior salário é: %.2f\n", maiorSalario);
        printf("O percentual de pessoas com salário até R$100,00 é: %.2f%%\n", (float)totalSalarioAte100 / totalHabitantes * 100);
        } else {
        printf("Nenhum dado foi fornecido.\n");
    }

    return 0;
}
