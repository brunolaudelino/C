#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n = 20;
    int primeiro = 0, segundo = 1;
    int i, proximo;

    printf("Os primeiros %d números da sequência de Fibonacci são:\n", n);

    printf("%d\n", primeiro);
    printf("%d\n", segundo);

    for (i = 3; i <= n; i++)
        {
        proximo = primeiro + segundo;
        printf("%d\n", proximo);
        primeiro = segundo;
        segundo = proximo;
        }

    return 0;
}
