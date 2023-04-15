#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "times.h"

Times* cria(char* nome, Jogador** jogadores, int num_jog) {
    Times* t = (Times*) malloc(sizeof(Times));
    if (t == NULL) {
        printf("Memória insuficiente!\n");
        exit(1);
    }

    strcpy(t->nome, nome);
    t->jogadores = jogadores;
    t->num_jog = num_jog;
    t->vitorias = 0;
    t->empates = 0;
    t->derrotas = 0;

    return t;
}

void libera(Times* t) {
    free(t->nome);
    free(t);
}

void atribui(Times* t, char* nome, Jogador** jogadores, int num_jog, int vitorias, int empates, int derrotas) {
    free(t->nome);
    strcpy(t->nome, nome);
    t->jogadores = jogadores;
    t->num_jog = num_jog;
    t->vitorias = vitorias;
    t->empates = empates;
    t->derrotas = derrotas;
}

void imprimir(Times* t) {
    printf("times: %s\n", t->nome);
    printf("Jogadores:\n");
    for (int i = 0; i < t->num_jog; i++) {
        printf("%d - ", i+1);
        imprimir(t->jogadores[i]);
    }
    printf("Vitórias: %d\n", t->vitorias);
    printf("Empates: %d\n", t->empates);
    printf("Derrotas: %d\n", t->derrotas);
}

int pontuacao(Times* t) {
    return t->vitorias * 3 + t->empates;
}
