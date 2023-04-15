#include <stdlib.h>
#include <stdio.h> 
#include <math.h>
#include "jogador.h"

Jogador*criar(const char* nome, int jogos, int gols, int assiste){
    Jogador* j = (Jogador*)malloc(sizeof(Jogador));
    if (j == NULL) {
        printf("Erro ao alocar memória para o jogador\n");
        exit(1);
    }
    atribuir(j, nome, jogos, gols, assiste);
    return j;
}

void atribuir(Jogador* j, const char* nome, int jogos, int gols, int assiste) {
    strcpy(j->nome, nome);
    j->jogos = jogos;
    j->gols = gols;
    j->assiste = assiste;
}

void imprimir(Jogador* j) {
    printf("Nome: %s\n", j->nome);
    printf("Jogos: %d\n", j->jogos);
    printf("Gols: %d\n", j->gols);
    printf("Assistencias: %d\n", j->assiste);
}

int bomJogador(Jogador* j) {
    float media_gols_assiste = (float) (j->gols + j->assiste) / j->jogos;
    return media_gols_assiste > 0.5;
}

