#include <stdio.h>
#include <string.h>

void escreva_string(FILE* f, const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        fputc(str[i], f);
    }
}

int main(void) {
    FILE *f = fopen("saidaEX1.txt", "wb");
    char texto[26];
    printf("Digite uma string (ate 25 caracteres): ");
    scanf("%25s", texto);
    escreva_string(f, texto);
    fclose(f);
    return 0;
}