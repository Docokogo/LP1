#include <stdio.h>
#include <string.h>

enum TipoVeiculo { NAVE, SONDA, ESTACAO };

struct NaveEspacial {
    int tripulacao;
    float combustivel;
    int ano;
};

struct Sonda {
    float autonomia;
    char sensorEspecial[50];
};

struct EstacaoEspacial {
    int capacidadeMaxima;
    char moduloPrincipal[50];
};

union DetalhesVeiculo {
    struct NaveEspacial nave;
    struct Sonda sonda;
    struct EstacaoEspacial estacao;
};

struct VeiculoEspacial {
    char nome[100];
    enum TipoVeiculo tipo;
    union DetalhesVeiculo detalhes;
};

void preenche(struct VeiculoEspacial *v) {
    printf("Nome: ");
    scanf("%99s", v->nome);

    printf("Tipo (0=Nave, 1=Sonda, 2=Estacao): ");
    int t;
    scanf("%d", &t);
    v->tipo = (enum TipoVeiculo)t;

    switch (v->tipo) {
        case NAVE:
            printf("Tripulacao: ");
            scanf("%d", &v->detalhes.nave.tripulacao);
            printf("Combustivel: ");
            scanf("%f", &v->detalhes.nave.combustivel);
            printf("Ano: ");
            scanf("%d", &v->detalhes.nave.ano);
            break;
        case SONDA:
            printf("Autonomia (anos-luz): ");
            scanf("%f", &v->detalhes.sonda.autonomia);
            printf("Sensor especial: ");
            scanf("%49s", v->detalhes.sonda.sensorEspecial);
            break;
        case ESTACAO:
            printf("Capacidade maxima: ");
            scanf("%d", &v->detalhes.estacao.capacidadeMaxima);
            printf("Modulo principal: ");
            scanf("%49s", v->detalhes.estacao.moduloPrincipal);
            break;
    }
}

void exibe(struct VeiculoEspacial v) {
    printf("Nome: %s\n", v.nome);
    switch (v.tipo) {
        case NAVE:
            printf("Tipo: Nave Espacial\n");
            printf("Tripulacao: %d\n", v.detalhes.nave.tripulacao);
            printf("Combustivel: %.2f\n", v.detalhes.nave.combustivel);
            printf("Ano: %d\n", v.detalhes.nave.ano);
            break;
        case SONDA:
            printf("Tipo: Sonda\n");
            printf("Autonomia: %.2f anos-luz\n", v.detalhes.sonda.autonomia);
            printf("Sensor especial: %s\n", v.detalhes.sonda.sensorEspecial);
            break;
        case ESTACAO:
            printf("Tipo: Estacao Espacial\n");
            printf("Capacidade maxima: %d\n", v.detalhes.estacao.capacidadeMaxima);
            printf("Modulo principal: %s\n", v.detalhes.estacao.moduloPrincipal);
            break;
    }
    printf("------------------------\n");
}

int main(void) {
    struct VeiculoEspacial v;
    preenche(&v);
    exibe(v);
    return 0;
}