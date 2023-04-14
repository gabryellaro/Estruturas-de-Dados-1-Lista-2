#ifndef COMPLEXO_H
#define COMPLEXO_H

typedef struct complex {
    double real;
    double imag;
} Complex;

Complex *criar_complexo(double real, double imag);

void destruir_complexo(Complex *num);

Complex *somar_complexos(Complex *num1, Complex *num2);

Complex *multiplicar_complexos(Complex *num1, Complex *num2);

#endif 