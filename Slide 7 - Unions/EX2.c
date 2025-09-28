#include <stdio.h>
#include <string.h>

union Pessoa {
    int CPF;
    char RG[20];
    char Nome[50];
};

int main(void) {
    union Pessoa p;
    p.CPF = 123456789;
    printf("CPF: %d\n", p.CPF);
    strcpy(p.RG, "12345678-9");
    printf("RG: %s\n", p.RG);
    strcpy(p.Nome, "Joao da Silva");
    printf("Nome: %s\n", p.Nome);
    return 0;
}