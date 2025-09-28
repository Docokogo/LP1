#include <stdio.h>

enum Moeda { REAIS, DOLARES, EUROS };

struct Preco {
    enum Moeda tipo;
    union {
        float reais;
        float dolares;
        float euros;
    } valor;
};

void exibe(struct Preco p) {
    switch (p.tipo) {
        case REAIS:
            printf("Preco: %.2f BRL\n", p.valor.reais);
            break;
        case DOLARES:
            printf("Preco: %.2f USD\n", p.valor.dolares);
            break;
        case EUROS:
            printf("Preco: %.2f EUR\n", p.valor.euros);
            break;
    }
}

void altera(struct Preco *p, enum Moeda nova) {
    float valorEmReais;
    switch (p->tipo) {
        case REAIS:
            valorEmReais = p->valor.reais;
            break;
        case DOLARES:
            valorEmReais = p->valor.dolares * 5.0;
            break;
        case EUROS:
            valorEmReais = p->valor.euros * 5.5;
            break;
    }
    p->tipo = nova;
    switch (nova) {
        case REAIS:
            p->valor.reais = valorEmReais;
            break;
        case DOLARES:
            p->valor.dolares = valorEmReais * 0.20;
            break;
        case EUROS:
            p->valor.euros = valorEmReais * 0.18;
            break;
    }
}

int main(void) {
    struct Preco p;
    int escolha;
    float valor;
    printf("Escolha a moeda: 0=BRL, 1=USD, 2=EUR: ");
    scanf("%d", &escolha);
    p.tipo = (enum Moeda)escolha;
    printf("Digite o valor: ");
    scanf("%f", &valor);
    switch (p.tipo) {
        case REAIS:
            p.valor.reais = valor;
            break;
        case DOLARES:
            p.valor.dolares = valor;
            break;
        case EUROS:
            p.valor.euros = valor;
            break;
    }
    exibe(p);
    printf("Converter para: 0=BRL, 1=USD, 2=EUR: ");
    scanf("%d", &escolha);
    altera(&p, (enum Moeda)escolha);
    exibe(p);
    return 0;
}