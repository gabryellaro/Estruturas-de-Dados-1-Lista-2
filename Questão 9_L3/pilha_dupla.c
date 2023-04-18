#include "pilha_dupla.h"

void inicializaPilha(PilhaDupFila *pilha) {
    pilha->fila1.inicio = pilha->fila1.fim = NULL;
    pilha->fila2.inicio = pilha->fila2.fim = NULL;
}

void enfileira(Fila *fila, int valor) {
    NoFila *novoNo = (NoFila*)malloc(sizeof(NoFila));
    novoNo->valor = valor;
    novoNo->prox = NULL;
    if (fila->fim != NULL) {
        fila->fim->prox = novoNo;
    } else {
        fila->inicio = novoNo;
    }
    fila->fim = novoNo;
}

int desenfileira(Fila *fila) {
    if (fila->inicio == NULL) {
        fprintf(stderr, "Erro: fila vazia\n");
        exit(EXIT_FAILURE);
    }
    NoFila *noRemovido = fila->inicio;
    int valor = noRemovido->valor;
    fila->inicio = noRemovido->prox;
    if (fila->inicio == NULL) {
        fila->fim = NULL;
    }
    free(noRemovido);
    return valor;
}

void push(PilhaDupFila *pilha, int valor) {
    enfileira(&pilha->fila1, valor);
}

int pop(PilhaDupFila *pilha) {
    if (pilha->fila1.inicio == NULL) {
        fprintf(stderr, "Erro: pilha vazia\n");
        exit(EXIT_FAILURE);
    }
    while (pilha->fila1.inicio->prox != NULL) {
        enfileira(&pilha->fila2, desenfileira(&pilha->fila1));
    }
    int valor = desenfileira(&pilha->fila1);
    while (pilha->fila2.inicio != NULL) {
        enfileira(&pilha->fila1, desenfileira(&pilha->fila2));
    }
    return valor;
}

void imprimePilha(PilhaDupFila pilha) {
    printf("[");
    while (pilha.fila1.inicio != NULL) {
        int valor = desenfileira(&pilha.fila1);
        printf("%d", valor);
        if (pilha.fila1.inicio != NULL) {
            printf(", ");
        }
        enfileira(&pilha.fila2, valor);
    }
    while (pilha.fila2.inicio != NULL) {
        int valor = desenfileira(&pilha.fila2);
        enfileira(&pilha.fila1, valor);
    }
    printf("]\n");
}
