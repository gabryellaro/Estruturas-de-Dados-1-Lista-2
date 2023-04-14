#ifndef ESFERA_H
#define ESFERA_H

//definição de tipo
typedef struct {
    double raio;
} esfera;

//cabeçalho das funções
esfera *iniciar_esfera(double raio);
double area(esfera *esf);
double volume(esfera *esf);
void mostrar_esfera(esfera *esf);
void liberar_esfera(esfera *esf);

#endif