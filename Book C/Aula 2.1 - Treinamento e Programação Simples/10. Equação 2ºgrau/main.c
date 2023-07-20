#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    float a, b, c;
    float delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

//Delta é igual X²-4ac
    delta = b*b - 4*a*c;

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("As raízes são: %.2f e %.2f\n", x1, x2);
    }
    else if (delta == 0)
    {
        x1 = -b / (2*a);
        printf("A raiz dupla é: %.2f\n", x1);
    }
    else
    {
        printf("A equação não possui raízes reais.\n");
    }

    return 0;
}
