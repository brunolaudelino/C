//Claro! Vamos lá:
//Crie um programa em C que apresente um menu de opções para escolher um animal favorito.
//Após a seleção, o programa deve exibir uma mensagem com uma curiosidade sobre o animal escolhido.
//Tente criar o código e, em seguida, irei analisá-lo e fornecer feedback, se necessário.
#include <stdio.h>
#include <stdlib.h>

void exibirMenu ()
{
    printf("----------------------------------- \n");
    printf("Bem vindo ao nosso Programa Animal \n");
    printf("Dentro as nossa empresa temos vário animais \n");
    printf("Sendo que não estou falando do Bozo, hein");
    printf("Gostaria que selecionasse o seu animal favorito\n");
    printf("Que irei informar uma curiosidade sobre o bicho \n");
}
void exibirOpcoes ()
{
    printf("Opcao 1: O Leao\n");
    printf("Opcao 2: Girrafa\n");
    printf("Opcao 3: Cavalo\n");
    printf("Opcao 4: Cahorro\n");
    printf("Opcao 5: Gato\n");
}

int main ()
{
    exibirMenu();
    exibirOpcoes ();

    int opcao;
    printf("Escolha seu animal favorito ......\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1: printf("O Leao e considerado o rei da selva \n");
        break;
        case 2: printf("A girrafa tem uns dos pescoços maior do mundo\n");
        break;
        case 3: printf("O Cavalo e usado para carregamento e tambem o hipismo\n");
        break;
        case 4: printf("O Cachorro e considerado o melhor amigo do Homem \n");
        break;
        case 5: printf("O gato e um animal muito individualista e sabemos que e ranzinzo\n");
        break;
        default: printf("Voce selecionou uma opcao invalida, retorne querido(a)\n");
        break;
    }
    return 0;
}
