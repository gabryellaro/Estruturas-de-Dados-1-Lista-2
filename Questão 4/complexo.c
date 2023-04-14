#include <stdlib.h>
#include<stdio.h>
#include "complexo.h"

// Função para criar um número complexo
Complex *criar_complexo(double real, double imag) {
    Complex *num = (Complex *) malloc(sizeof(Complex));
    num->real = real;
    num->imag = imag;
    return num;
}

// Função para destruir um número complexo
void destruir_complexo(Complex *num) {
    free(num);
}

// Função para somar dois números complexos
Complex *somar_complexos(Complex *num1, Complex *num2) {
    double real = num1->real + num2->real;
    double imag = num1->imag + num2->imag;
    return criar_complexo(real, imag);
}

// Função para multiplicar dois números complexos
Complex *multiplicar_complexos(Complex *num1, Complex *num2) {
    double real = num1->real * num2->real - num1->imag * num2->imag;
    double imag = num1->real * num2->imag + num1->imag * num2->real;
    return criar_complexo(real, imag);
}