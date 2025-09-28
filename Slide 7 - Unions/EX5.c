#include <stdio.h>
#include <stdbool.h>
#include <string.h>

enum Classe { ANFIBIO, AVE, MAMIFERO, REPTIL };

struct Anfibio {
    int patas;
    float espessuraPele;
    bool possuiCauda;
};

struct Ave {
    float comprimentoBico;
    float autonomiaVoo;
    float faixaFrequenciaCanto;
};

struct Mamifero {
    int dentes;
    float volumeCerebro;
    float velocidadeTerrestre;
};

struct Reptil {
    bool venenoso;
    float autonomiaAgua;
    float espessuraOvos;
};

union DetalhesAnimal {
    struct Anfibio anfibio;
    struct Ave ave;
    struct Mamifero mamifero;
    struct Reptil reptil;
};

struct Animal {
    enum Classe classe;
    char nomeEspecie[50];
    char corPredominante[30];
    union DetalhesAnimal detalhes;
};

void exibeAnimal(struct Animal a) {
    printf("Nome da especie: %s\n", a.nomeEspecie);
    printf("Cor predominante: %s\n", a.corPredominante);
    switch (a.classe) {
        case ANFIBIO:
            printf("Classe: Anfibio\n");
            printf("Patas: %d\n", a.detalhes.anfibio.patas);
            printf("Espessura da pele: %.2f\n", a.detalhes.anfibio.espessuraPele);
            printf("Possui cauda: %s\n", a.detalhes.anfibio.possuiCauda ? "Sim" : "Nao");
            break;
        case AVE:
            printf("Classe: Ave\n");
            printf("Comprimento do bico: %.2f\n", a.detalhes.ave.comprimentoBico);
            printf("Autonomia de voo: %.2f\n", a.detalhes.ave.autonomiaVoo);
            printf("Faixa de frequencia do canto: %.2f\n", a.detalhes.ave.faixaFrequenciaCanto);
            break;
        case MAMIFERO:
            printf("Classe: Mamifero\n");
            printf("Quantidade de dentes: %d\n", a.detalhes.mamifero.dentes);
            printf("Volume do cerebro: %.2f\n", a.detalhes.mamifero.volumeCerebro);
            printf("Velocidade terrestre: %.2f\n", a.detalhes.mamifero.velocidadeTerrestre);
            break;
        case REPTIL:
            printf("Classe: Reptil\n");
            printf("Venenoso: %s\n", a.detalhes.reptil.venenoso ? "Sim" : "Nao");
            printf("Autonomia debaixo d'agua: %.2f\n", a.detalhes.reptil.autonomiaAgua);
            printf("Espessura dos ovos: %.2f\n", a.detalhes.reptil.espessuraOvos);
            break;
    }
    printf("-------------------------\n");
}

int main(void) {
    struct Animal animais[6];
    animais[0].classe = ANFIBIO;
    strcpy(animais[0].nomeEspecie, "Sapo");
    strcpy(animais[0].corPredominante, "Verde");
    animais[0].detalhes.anfibio.patas = 4;
    animais[0].detalhes.anfibio.espessuraPele = 0.5;
    animais[0].detalhes.anfibio.possuiCauda = false;
    animais[1].classe = AVE;
    strcpy(animais[1].nomeEspecie, "Papagaio");
    strcpy(animais[1].corPredominante, "Verde");
    animais[1].detalhes.ave.comprimentoBico = 4.5;
    animais[1].detalhes.ave.autonomiaVoo = 12;
    animais[1].detalhes.ave.faixaFrequenciaCanto = 3000;
    animais[2].classe = MAMIFERO;
    strcpy(animais[2].nomeEspecie, "Leao");
    strcpy(animais[2].corPredominante, "Amarelo");
    animais[2].detalhes.mamifero.dentes = 30;
    animais[2].detalhes.mamifero.volumeCerebro = 250;
    animais[2].detalhes.mamifero.velocidadeTerrestre = 80;
    animais[3].classe = REPTIL;
    strcpy(animais[3].nomeEspecie, "Cobra");
    strcpy(animais[3].corPredominante, "Marrom");
    animais[3].detalhes.reptil.venenoso = true;
    animais[3].detalhes.reptil.autonomiaAgua = 1;
    animais[3].detalhes.reptil.espessuraOvos = 0.2;
    animais[4].classe = ANFIBIO;
    strcpy(animais[4].nomeEspecie, "Salamandra");
    strcpy(animais[4].corPredominante, "Preta");
    animais[4].detalhes.anfibio.patas = 4;
    animais[4].detalhes.anfibio.espessuraPele = 0.3;
    animais[4].detalhes.anfibio.possuiCauda = true;
    animais[5].classe = AVE;
    strcpy(animais[5].nomeEspecie, "Pinguim");
    strcpy(animais[5].corPredominante, "Preto e branco");
    animais[5].detalhes.ave.comprimentoBico = 6;
    animais[5].detalhes.ave.autonomiaVoo = 0;
    animais[5].detalhes.ave.faixaFrequenciaCanto = 1500;
    for (int i = 0; i < 6; i++) {
        exibeAnimal(animais[i]);
    }
    return 0;
}