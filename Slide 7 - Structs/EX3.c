#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

void preencheB (struct Personagem* p) {
    printf("Digite a forca: ");
    scanf("%d", &p->forca);
    printf("Digite a energia: ");
    scanf("%d", &p->energia);
    printf("Digite a experiencia: ");
    scanf("%d", &p->experiencia);
}

void main (void) {
    struct Personagem p1;
    preencheB(&p1);

    struct Personagem p2;
    preencheB(&p2);

    printf("(%d,%d,%d) vs (%d,%d,%d)\n",
           p1.forca, p1.energia, p1.experiencia,
           p2.forca, p2.energia, p2.experiencia);
}