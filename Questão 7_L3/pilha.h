#ifndef PILHA_H
#define PILHA_H

typedef struct _no No;
typedef struct _pilha Pilha;

Pilha *criar_pilha();
void destruir_pilha(Pilha *pilha);
void push(Pilha *pilha, int valor);
int pop(Pilha *pilha);
int pilha_vazia(Pilha *pilha);

#endif
