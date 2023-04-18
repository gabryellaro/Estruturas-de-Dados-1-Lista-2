#include "palindromo.h"
#include <stdlib.h>

#define MAX_SIZE 100

struct Pilha {
    char elementos[MAX_SIZE];
    int topo;
};

void inicializar_pilha(Pilha *p) {
    p->topo = -1;
}

int pilha_vazia(Pilha *p) {
    return p->topo == -1;
}

int pilha_cheia(Pilha *p) {
    return p->topo == MAX_SIZE - 1;
}

void push(Pilha *p, char elem) {
    if (pilha_cheia(p)) {
        exit(EXIT_FAILURE);
    }
    p->topo++;
    p->elementos[p->topo] = elem;
}

char pop(Pilha *p) {
    if (pilha_vazia(p)) {
        exit(EXIT_FAILURE);
    }
    char elem = p->elementos[p->topo];
    p->topo--;
    return elem;
}

char topo(Pilha *p) {
    if (pilha_vazia(p)) {
        exit(EXIT_FAILURE);
    }
    return p->elementos[p->topo];
}

int strcmp(char *s1, char *s2) {
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2) {
            return *s1 - *s2;
        }
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int strlen(char *s) {
    int len = 0;
    while (*s != '\0') {
        len++;
        s++;
    }
    return len;
}

int eh_palindromo(char *palavra) {
    Pilha p;
    inicializar_pilha(&p);
    int i;
    for (i = 0; i < strlen(palavra); i++) {
        push(&p, palavra[i]);
    }
    char palavra_invertida[strlen(palavra) + 1];
    palavra_invertida[strlen(palavra)] = '\0';
    for (i = 0; i < strlen(palavra); i++) {
        palavra_invertida[i] = pop(&p);
    }
    return strcmp(palavra, palavra_invertida) == 0;
}
