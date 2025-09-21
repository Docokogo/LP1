#include <stdio.h>

struct NaveEspacial {
    char nome[100];
    int tripulacao;
    float combustivel;
    int ano;
};

void preenche (struct NaveEspacial *n) {
    scanf("%99s", n->nome);
    scanf("%d", &n->tripulacao);
    scanf("%f", &n->combustivel);
    scanf("%d", &n->ano);
}

int main (void) {
    struct NaveEspacial nave1;
    preenche(&nave1);
    printf("Nome        : %s\n", nave1.nome);
    printf("Tripulacao  : %d\n", nave1.tripulacao);
    printf("Combustivel : %f\n", nave1.combustivel);
    printf("Ano         : %d\n", nave1.ano);
    return 0;
}