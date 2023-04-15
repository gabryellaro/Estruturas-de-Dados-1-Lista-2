/*Libera a memória de um ponto previamente criado.
*/
#ifndef PONTO_H
#define PONTO_H

typedef struct{
    float x; 
    float y;
}Ponto;
 
    
void libera (Ponto* p);

void acessa (Ponto* p, float* x, float* y);

void atribui (Ponto* p, float x, float y);

float distancia (Ponto* p1, Ponto* p2);

Ponto *soma(Ponto* p1,Ponto* p2);

Ponto *subtrai(Ponto* p1,Ponto* p2);

#endif