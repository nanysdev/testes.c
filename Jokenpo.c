#include <stdio.h>
#include <stdlib.h> // Serve para geração de números aleatórios (rand e srand)
#include <time.h> // Serve para usar a função time (para gerar números aleatórios diferentes a cada execução através da hora)

int main() {
    int escolha_jogador, escolha_computador;
    srand(time(NULL)); // srand()-> Semente para gerar números aleatórios | time(NULL)-> Pega o tempo atual do sistema (em segundos desde 1970)->Esse valor muda a cada segundo
    printf("\n ____________________________________\n");
    printf("|           JOGO JOKENPÔ             |\n");
    printf("|                                    |\n");
    printf("|====================================|\n");
    printf("| Escolha uma opção:                 |\n");
    printf("| (1) - Pedra                        |\n");
    printf("| (2) - Papel                        |\n");
    printf("| (3) - Tesoura                      |\n");
    printf("|____________________________________|\n");
    printf("| => Digite sua escolha:");
    scanf("%d", &escolha_jogador);

    escolha_computador = rand() % 3 + 1; // Gera um número aleatório entre 1 e 3
    
    printf("|====================================|\n");
    printf("|       ESCOLHAS DOS JOGADORES       |\n");

    switch (escolha_jogador)  {
        case 1:
            printf("|Jogador 1: Pedra                    |\n");
            break; 
        case 2:
            printf("|Jogador 1: Papel                    |\n");
            break;
        case 3:
            printf("|Jogador 1: Tesoura                  |\n");
            break;
        default:
            printf("|Opção Inválida! Tente novamente.    |\n");
            break;
    }

    switch (escolha_computador)  {
        case 1:
            printf("|Jogador 2: Pedra                    |\n");
            break;
        case 2:
            printf("|Jogador 2: Papel                    |\n");
            break;
        case 3:
            printf("|Jogador 2: Tesoura                  |\n");
            break;
    }
    printf("|====================================|\n");
    printf("|             RESULTADO              |\n");

    if (escolha_jogador == escolha_computador) {                                    // se a escolha for igual 
        printf("|          #### EMPATE ####          |\n");
        printf("|____________________________________|\n");
        } else if ((escolha_jogador == 1) && (escolha_computador == 3) ||           // && -> as duas tem que ser verdade
                    (escolha_jogador == 2) && (escolha_computador == 1) ||          // || -> ou uma ou outra tem que ser verdade    
                    (escolha_jogador == 3) && (escolha_computador == 2)) {
                        printf("|#### PARABÉNS!  VOCÊ GANHOU =)  ####|\n");
                        printf("|____________________________________|\n");
                    } else {
                        printf("|      #### VOCÊ PERDEU =( ####      |\n");
                        printf("|____________________________________|\n");
                    }
    return 0;
}
