#include <stdlib.h>
#include <stdio.h> 
#include <math.h>
#include "jogador.c"
#include "times.h"

int main() {
    Jogador** jogadores_flamengo = (Jogador**) malloc(sizeof(Jogador*) * 11);
    jogadores_flamengo[0] = criar("Thiago Lima", 20, 15, 8);
    jogadores_flamengo[1] = criar("Thiago Lima", 20, 5, 12);
    jogadores_flamengo[2] = criar("Thiago Lima", 20, 10, 15);
    jogadores_flamengo[3] = criar("Thiago Lima", 20, 2, 5);
    jogadores_flamengo[4] = criar("Thiago Lima", 20, 3, 10);
    jogadores_flamengo[5] = criar("Thiago Lima", 20, 0, 5);
    jogadores_flamengo[6] = criar("Thiago Lima", 20, 1, 6);
    jogadores_flamengo[7] = criar("Thiago Lima", 20, 0, 3);
    jogadores_flamengo[8] = criar("Thiago Lima", 20, 0, 4);
    jogadores_flamengo[9] = criar("Thiago Lima", 20, 12, 8);
    jogadores_flamengo[10] = criar("Thiago Lima", 20, 7, 2);

    Times* flamengo = cria("Flamengo", jogadores_flamengo, 11 );
    imprimir(flamengo);

    int pontos = pontuacao(flamengo);
    printf("Pontuação: %d\n", pontos);

    liberar(flamengo);

    return 0;
}
    /*Jogador* j1 = cria("Pedro", 3,3,10);
    Jogador* j2 = cria("Horacio", 3,3,10);

    imprimir(j1);
    printf("\n");
    imprimir(j2);
    printf("\n");
    if (bomJogador(j1)) {
        printf("O jogador %s e bom!\n", j1->nome);
    } else {
        printf("O jogador %s nao e bom.\n", j1->nome);
    }
    if (bomJogador(j2)) {
        printf("O jogador %s e bom!\n", j2->nome);
    } else {
        printf("O jogador %s nao e bom.\n", j2->nome);
    }*/
