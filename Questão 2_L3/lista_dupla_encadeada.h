#ifndef LISTA_DUPLA_ENCADEADA_H
#define LISTA_DUPLA_ENCADEADA_H

typedef struct no {
    int dado;
    struct no* proximo;
    struct no* anterior;
} No;

typedef struct lista_duplamente_encadeada {
    No* cabeca;
    No* cauda;
} ListaDuplamenteEncadeada;

void criar_lista(ListaDuplamenteEncadeada* lista);
void inserir_no(ListaDuplamenteEncadeada* lista, int dado);
void remover_no(ListaDuplamenteEncadeada* lista, int dado);

#endif
