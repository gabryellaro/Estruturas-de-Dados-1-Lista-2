#include <stdio.h>
#include "lista_dupla_encadeada.c"

int main() {
    ListaDuplamenteEncadeada lista;
    criar_lista(&lista);

    inserir_no(&lista, 10);
    inserir_no(&lista, 20);
    inserir_no(&lista, 30);

    printf("Lista depois da insercao:\n");
    No* atual = lista.cabeca;
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->proximo;
    }
    printf("\n");

    remover_no(&lista, 20);

    printf("Lista depois da remocao:\n");
    atual = lista.cabeca;
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->proximo;
    }
    printf("\n");

    return 0;
}
