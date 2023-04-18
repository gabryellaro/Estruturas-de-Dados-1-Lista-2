#include <stdio.h>
#include <stdlib.h>
#include "lista_dupla_encadeada.h"

void criar_lista(ListaDuplamenteEncadeada* lista) {
    lista->cabeca = NULL;
    lista->cauda = NULL;
}

void inserir_no(ListaDuplamenteEncadeada* lista, int dado) {
    No* novo_no = (No*)malloc(sizeof(No));
    novo_no->dado = dado;
    novo_no->proximo = NULL;
    novo_no->anterior = NULL;

    if (lista->cabeca == NULL) {
        lista->cabeca = novo_no;
        lista->cauda = novo_no;
    }
    else {
        lista->cauda->proximo = novo_no;
        novo_no->anterior = lista->cauda;
        lista->cauda = novo_no;
    }
}

void remover_no(ListaDuplamenteEncadeada* lista, int dado) {
    No* atual = lista->cabeca;
    No* anterior = NULL;

    while (atual != NULL) {
        if (atual->dado == dado) {
            if (anterior == NULL) { // Remover da cabeça
                lista->cabeca = atual->proximo;
                if (lista->cabeca != NULL)
                    lista->cabeca->anterior = NULL;
                else
                    lista->cauda = NULL;
            }
            else {
                anterior->proximo = atual->proximo;
                if (atual->proximo != NULL)
                    atual->proximo->anterior = anterior;
                else
                    lista->cauda = anterior;
            }
            free(atual);
            return;
        }
        anterior = atual;
        atual = atual->proximo;
    }
}
