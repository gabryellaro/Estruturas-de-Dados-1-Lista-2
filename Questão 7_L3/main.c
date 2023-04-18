#include <stdio.h>
#include "pilha.h"
#include "conversor.h"

int main() {
    Pilha *pilha = criar_pilha();
    push(pilha, 1);
    push(pilha, 0);
    push(pilha, 1);
    int base = 2;
    int decimal = converter_para_decimal(base, pilha);
    printf("O numero em base %d e: %d\n", base, decimal);
    destruir_pilha(pilha);
    return 0;
}
