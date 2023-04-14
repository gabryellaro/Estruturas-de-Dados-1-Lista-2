#include <stdio.h>
#include "complexo.h"

int main() {
    Complex *num1 = criar_complexo(1, 2); // Cria um número complexo com parte real 1 e parte imaginária 2
    Complex *num2 = criar_complexo(3, 4); // Cria um número complexo com parte real 3 e parte imaginária 4

    Complex *soma = somar_complexos(num1, num2); // Calcula a soma de num1 e num2
    Complex *produto = multiplicar_complexos(num1, num2); // Calcula o produto de num1 e num2

    printf("Soma: %.2f + %.2fi\n", soma->real, soma->imag); // Imprime a soma
    printf("Produto: %.2f + %.2fi\n", produto->real, produto->imag); // Imprime o produto

    destruir_complexo(num1); // Destroi num1
    destruir_complexo(num2); // Destroi num2
    destruir_complexo(soma); // Destroi a soma
    destruir_complexo(produto); // Destroi o produto

    return 0;
}