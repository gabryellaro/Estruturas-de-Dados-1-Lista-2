#include "palindromo.c"
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char palavra[MAX_SIZE];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    if (eh_palindromo(palavra)) {
        printf("%s eh um palindromo.\n", palavra);
    } else {
        printf("%s nao eh um palindromo.\n", palavra);
    }
    return 0;
}
