#include <stdio.h>
#include <string.h>

struct Pessoa{
    int idade;
    char nome[64];
    int peso;
};

void preencher_pessoa(struct Pessoa *p) {
    printf("Nome: ");
    scanf("%63s", p->nome);
    printf("Idade: ");
    scanf("%d", &p->idade);
    printf("Peso: ");
    scanf("%d", &p->peso);
}

void escreve_pessoa(FILE *f, const struct Pessoa *p) {
    int len = strlen(p->nome);
    fwrite(&p->idade, sizeof(int), 1, f);
    fwrite(&len, sizeof(int), 1, f);
    fwrite(p->nome, sizeof(char), len, f);
    fwrite(&p->peso, sizeof(int), 1, f);
}

void le_pessoa(FILE *f, struct Pessoa *p) {
    int len;
    fread(&p->idade, sizeof(int), 1, f);
    fread(&len, sizeof(int), 1, f);
    fread(p->nome, sizeof(char), len, f);
    p->nome[len] = '\0';
    fread(&p->peso, sizeof(int), 1, f);
}

int main(void){
    struct Pessoa pessoas[10];
    FILE *f;
    for (int i = 0; i < 10; i++) {
        printf("\n--- Pessoa %d ---\n", i + 1);
        preencher_pessoa(&pessoas[i]);
    }
    f = fopen("saidaEX7.txt", "wb");
    for (int i = 0; i < 10; i++) {
        escreve_pessoa(f, &pessoas[i]);
    }
    fclose(f);
    f = fopen("saidaEX7.txt", "rb");
    struct Pessoa p;
    printf("\n--- Pessoas lidas do arquivo ---\n");
    while (fread(&p.idade, sizeof(int), 1, f) == 1) {
        fseek(f, -(long)sizeof(int), SEEK_CUR);
        le_pessoa(f, &p);
        printf("Nome: %-10s | Idade: %2d | Peso: %3d\n", p.nome, p.idade, p.peso);
    }
    fclose(f);
    return 0;
}