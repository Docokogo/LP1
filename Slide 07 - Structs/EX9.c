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

int main (void) {
    struct Personagem personagens[10];
    for (int i = 0; i < 10; i++) {
        personagens[i].id = i + 1;
        personagens[i].pos.x = 0;
        personagens[i].pos.y = 0;
        personagens[i].pontuacao = 0;
    }
    for (int i = 0; i < 10; i++) {
        printf("Personagem %d -> ID=%d, Pos=(%d,%d), Pontuacao=%d\n",
               i + 1,
               personagens[i].id,
               personagens[i].pos.x,
               personagens[i].pos.y,
               personagens[i].pontuacao);
    }
    return 0;
}