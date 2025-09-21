#include <stdio.h>

struct Ponto {
    int x;
    int y;
};

void preenchePonto (struct Ponto *p) {
    printf("Digite x e y: ");
    scanf("%d %d", &p->x, &p->y);
}

void preencheVetor (struct Ponto v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Ponto %d:\n", i + 1);
        preenchePonto(&v[i]);
    }
}

struct Ponto maisDistante (struct Ponto v[], int tamanho) {
    int MaisDistante = 0;
    long long maiorDist = v[0].x * (long long)v[0].x + v[0].y * (long long)v[0].y;
    for (int i = 1; i < tamanho; i++) {
        long long distAtual = v[i].x * (long long)v[i].x + v[i].y * (long long)v[i].y;
        if (distAtual > maiorDist) {
            maiorDist = distAtual;
            MaisDistante = i;
        }
    }
    return v[MaisDistante];
}

int main (void) {
    struct Ponto pontos[10];
    preencheVetor(pontos, 10);
    struct Ponto distante = maisDistante(pontos, 10);
    printf("\nO ponto mais distante da origem: (%d, %d)\n", distante.x, distante.y);
    return 0;
}