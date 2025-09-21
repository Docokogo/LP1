#include <stdio.h>

struct Posicao {
    int x;
    int y;
};

struct Personagem {
    int id;
    struct Posicao pos;
    int pontuacao;
};

void lePosicao (struct Posicao *p) {
    printf("Digite as coordenadas x y: ");
    scanf("%d %d", &p->x, &p->y);
}

void lePersonagem (struct Personagem *p, int id) {
    p->id = id;
    p->pontuacao = 0;
    printf("\n=== Personagem %d ===\n", id);
    lePosicao(&p->pos);
}

void desenhaMapa (struct Personagem v[], int n, int largura, int altura) {
    for (int y = 0; y < altura; y++) {
        for (int x = 0; x < largura; x++) {
            int ocupado = 0;
            for (int k = 0; k < n; k++) {
                if (v[k].pos.x == x && v[k].pos.y == y) {
                    printf("%d", v[k].id % 10);
                    ocupado = 1;
                    break;
                }
            }
            if (!ocupado) {
                printf(".");
            }
        }
        printf("\n");
    }
}

int main (void) {
    struct Personagem personagens[10];
    for (int i = 0; i < 10; i++) {
        lePersonagem(&personagens[i], i + 1);
    }
    desenhaMapa(personagens, 10, 30, 10);
    return 0;
}