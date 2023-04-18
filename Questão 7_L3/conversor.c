#include <math.h>
#include "conversor.h"

int converter_para_decimal(int base, Pilha *pilha) {
    int decimal = 0;
    int potencia = 0;
    while (!pilha_vazia(pilha)) {
        int digito = pop(pilha);
        decimal += digito * pow(base, potencia);
        potencia++;
    }
    return decimal;
}
