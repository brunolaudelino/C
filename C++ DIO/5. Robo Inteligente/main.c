#include <stdio.h>
#include <locale.h>
// O programa esta diferente do da DIO pq quero fazer minha assinatura. Obrigado !
void classificarNumero(int numero, int *positivos, int *negativos) {
  if (numero < 0) {
    printf("negativo!\n");
    (*negativos)++;
  } else {
    printf("positivo!\n");
    (*positivos)++;
  }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
  int numero, positivos = 0, negativos = 0;

    printf("--- Programa Bruno Laudelino --- \n");
  while (1)
  {
    printf("Digite o número: \n");
    scanf("%d", &numero);
    if (numero == 0)
        {
        break; // Encerra o laço se o usuário digitar 0.
        }
    //TODO: Chamar a função "classificarNumero", passando os endereços de "positivos" e "negativos".
    classificarNumero(numero, &positivos, &negativos);
    }
  //TODO: Imprimir a saída no padrão definido neste desafio.
  printf("%d números positivos, %d números negativos",positivos,negativos);

  return 0;
}
