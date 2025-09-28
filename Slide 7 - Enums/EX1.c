#include <stdio.h>

enum Dia { Seg, Ter, Qua, Qui, Sex, Sab, Dom };

char* nome(enum Dia d) {
    switch (d) {
        case Seg: return "Segunda";
        case Ter: return "Terca";
        case Qua: return "Quarta";
        case Qui: return "Quinta";
        case Sex: return "Sexta";
        case Sab: return "Sabado";
        case Dom: return "Domingo";
        default: return "Dia invalido";
    }
}

int main(void) {
    int escolha;
    printf("Escolha um dia da semana (0=Seg, 1=Ter, 2=Qua, 3=Qui, 4=Sex, 5=Sab, 6=Dom): ");
    scanf("%d", &escolha);
    if (escolha < 0 || escolha > 6) {
        printf("Dia invalido\n");
    } else {
        enum Dia diaEscolhido = (enum Dia)escolha;
        printf("Dia escolhido: %s\n", nome(diaEscolhido));
    }
    return 0;
}