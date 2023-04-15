#include <stdlib.h>
#include <stdio.h> 
#include <math.h>
#include "ponto.c"

int main(void){

    Ponto* p1 = cria(5,3);
    float x,y;
    acessa(p1,&x,&y);
    printf("Ponto criado: (%.1f, %.1f)\n", x, y);

    atribui(p1,4.0,6.0);
    acessa(p1,&x,&y);
    printf("Nova atribuicao: (%.1f, %.1f)\n", x, y);

    Ponto* p2 = cria(2.0,3.0);
    float d = (distancia(p1,p2));
    printf("Distancia entre os pontos:(%.1f)\n", d);

    Ponto* p3 = soma(p1,p2);
    acessa(p3,&x,&y);
    printf("A soma dos pontos (%.1f, %.1f) e (%.1f, %.1f) resulta em (%.1f, %.1f)\n",
           p1->x, p1->y, p2->x, p2->y, x, y);

    Ponto* p4 = subtrai(p1,p2);
    acessa(p4,&x,&y);
    printf("A subtracao dos pontos (%.1f, %.1f) e (%.1f, %.1f) resulta em (%.1f, %.1f)\n",
           p1->x, p1->y, p2->x, p2->y, x, y);

    libera(p1);
    libera(p2);
    libera(p3);
    libera(p4);

    return 0;
}