#include <stdlib.h>
#include<stdio.h>
#include "esfera.h"
#include <math.h>
#define PI 3.14159265

esfera* iniciar_esfera(double raio){
    esfera* esf = (esfera*)malloc(sizeof(esfera));
    esf->raio = raio;
    return esf;
}

double area(esfera* esf){
    return 4 * PI * pow(esf->raio, 2);
}

double volume(esfera* esf){
    return 4 * PI * pow(esf->raio, 3)/3;

}

void mostrar_esfera(esfera* esf){
     printf("Raio: %.2lf\nÁrea: %.2lf\nVolume: %.2lf\n", esf->raio, area(esf), volume(esf));
}

void liberar_esfera(esfera* esf ){
    free(esf);
}



