#include <stdlib.h>
#include "pilha.h"

struct _no {
    int valor;
    No *prox;
};

struct _pilha {
    No *topo;
};

Pilha *criar_pilha() {
    Pilha *pilha = (Pilha *) malloc(sizeof(Pilha));
    pilha->topo = NULL;
    return pilha;
}

void destruir_pilha(Pilha *pilha) {
    while (!pilha_vazia(pilha)) {
        pop(pilha);
    }
    free(pilha);
}

void push(Pilha *pilha, int valor) {
    No *novo_no = (No *) malloc(sizeof(No));
    novo_no->valor = valor;
    novo_no->prox = pilha->topo;
    pilha->topo = novo_no;
}

int pop(Pilha *pilha) {
    if (pilha_vazia(pilha)) {
        return -1; // pilha vazia
    }
    No *no_removido = pilha->topo;
    int valor = no_removido->valor;
    pilha->topo = no_removido->prox;
    free(no_removido);
    return valor;
}

int pilha_vazia(Pilha *pilha) {
    return pilha->topo == NULL;
}
