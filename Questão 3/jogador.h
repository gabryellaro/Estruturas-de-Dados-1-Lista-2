#ifndef JOGADOR_H
#define JOGADOR_H

typedef struct{
    char nome[50];
    int jogos;
    int gols;
    int assiste;
}Jogador;

Jogador* criar(const char* nome, int jogos, int gols, int assiste);
void atribuir(Jogador* j, const char* nome, int jogos, int gols, int assiste);
void imprimir(Jogador* j);
int bomJogador(Jogador* j);



#endif