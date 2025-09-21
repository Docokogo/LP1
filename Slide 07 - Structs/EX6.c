#include <stdio.h>

struct Atleta {
    char nome[100];
    char posicao[100];
    int idade;
    int gols;
    int partidas;
};

void exibirAtleta (struct Atleta a) {
    printf("======================================\n");
    printf("Nome     : %s\n", a.nome);
    printf("Posicao  : %s\n", a.posicao);
    printf("Idade    : %d anos\n", a.idade);
    printf("Gols     : %d\n", a.gols);
    printf("Partidas : %d\n", a.partidas);
    printf("======================================\n");
}

int main (void) {
    struct Atleta atleta1 = {"Neymar Jr", "Atacante", 32, 450, 600};
    struct Atleta atleta2 = {"Casemiro", "Volante", 32, 50, 550};
    struct Atleta atleta3 = {"Alisson Becker", "Goleiro", 32, 0, 400};
    exibirAtleta(atleta1);
    exibirAtleta(atleta2);
    exibirAtleta(atleta3);
    return 0;
}