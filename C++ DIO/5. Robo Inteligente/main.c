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
    printf("Digite o n�mero: \n");
    scanf("%d", &numero);
    if (numero == 0)
        {
        break; // Encerra o la�o se o usu�rio digitar 0.
        }
    //TODO: Chamar a fun��o "classificarNumero", passando os endere�os de "positivos" e "negativos".
    classificarNumero(numero, &positivos, &negativos);
    }
  //TODO: Imprimir a sa�da no padr�o definido neste desafio.
  printf("%d n�meros positivos, %d n�meros negativos",positivos,negativos);

  return 0;
}
