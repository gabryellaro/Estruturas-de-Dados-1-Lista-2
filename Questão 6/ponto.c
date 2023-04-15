#include <stdlib.h>
#include <stdio.h> 
#include <math.h>
#include "ponto.h"

Ponto* cria (float x, float y) {
Ponto* p = (Ponto*)malloc(sizeof(Ponto));
if (p == NULL) {
 printf("Memória insuficiente!\n");
 exit(1);
    }
    p->x = x;
    p->y = y;
    return p;
}

void libera (Ponto* p){
free(p);}

void acessa (Ponto* p, float* x, float* y) {
*x = p ->x;
*y = p ->y;
}

void atribui (Ponto* p, float x, float y){
 p->x = x;
 p->y = y;
}

float distancia (Ponto* p1, Ponto* p2) {
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;
    return sqrt(dx*dx + dy*dy);
}

Ponto* soma(Ponto* p1, Ponto* p2){
    float x = p2->x + p1->x;
    float y = p2->y + p1->y;
    return cria(x,y);
}

Ponto* subtrai(Ponto* p1, Ponto* p2){
    float x = p1->x - p2->x;
    float y = p1->y - p2->y;
    return cria(x,y);
}