#include <stdio.h>
#include "esfera.h"

int main(void)
{
    double raio = 4.5;
    esfera* esfera1 = iniciar_esfera(raio);

    printf("Área da esfera: %.4lf\n\n", area(esfera1));
    printf("Volume da esfera: %.4lf\n\n", volume(esfera1));
    mostrar_esfera(esfera1);
    liberar_esfera(esfera1);
    return 0;

}