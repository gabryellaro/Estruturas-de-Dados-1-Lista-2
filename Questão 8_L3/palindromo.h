#ifndef PALINDROMO_H_INCLUDED
#define PALINDROMO_H_INCLUDED

typedef struct Pilha Pilha;

void inicializar_pilha(Pilha *p);

int pilha_vazia(Pilha *p);

int pilha_cheia(Pilha *p);

void push(Pilha *p, char elem);

char pop(Pilha *p);

char topo(Pilha *p);

int strcmp(char *s1, char *s2);

int strlen(char *s);

int eh_palindromo(char *palavra);

#endif // PALINDROMO_H_INCLUDED
