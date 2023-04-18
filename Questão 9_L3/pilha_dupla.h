#ifndef PILHA_DUPLA_H
#define PILHA_DUPLA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct no_fila {
    int valor;
    struct no_fila *prox;
} NoFila;

typedef struct {
    NoFila *inicio;
    NoFila *fim;
} Fila;

typedef struct {
    Fila fila1;
    Fila fila2;
} PilhaDupFila;

void inicializaPilha(PilhaDupFila *pilha);
void push(PilhaDupFila *pilha, int valor);
int pop(PilhaDupFila *pilha);
void imprimePilha(PilhaDupFila pilha);

#endif