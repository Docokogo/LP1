#include <stdio.h>

enum Boolean { falso = 0, verdadeiro = 1 };

int main(void) {
    enum Boolean ligado = verdadeiro;
    enum Boolean desligado = falso;
    if (ligado) {
        printf("Ligado = verdadeiro\n");
    }
    if (!desligado) {
        printf("Desligado = falso\n");
    }
    return 0;
}