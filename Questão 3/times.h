#ifndef TIMES_H
#define TIMES_H

#include "jogador.h"

typedef struct{
    char nome[50];
    Jogador** jogadores;
    int num_jog;
    int vitorias;
    int empates;
    int derrotas;
}Times;

Times* cria(char* nome, Jogador** jogadores,int num_jog);
void atribuir(Times* t,char* nome,Jogador** jogadores,int num_jog, int vitorias, int empates, int derrotas);
void imprimir(Times* t);
int pontuacao(Times* t);
void liberar(Times* t);

#endif