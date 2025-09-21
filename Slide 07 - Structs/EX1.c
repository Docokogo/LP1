#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

int main (void) {
    struct Personagem p1;
    p1.forca = 10;
    p1.energia = 50;
    p1.experiencia = 30;
    struct Personagem p2 = {18, 20, 25};
    printf("Personagem 1\n Forca: %d, Energia: %d, Experiencia: %d\n", p1.forca, p1.energia, p1.experiencia);
    printf("Personagem 2\n Forca: %d, Energia: %d, Experiencia: %d\n", p2.forca, p2.energia, p2.experiencia);
    return 0;
}