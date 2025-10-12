#include <stdio.h>
#include <string.h>

#define QTD_STRINGS 10
#define TAM_MAX 26

void escreva_string(FILE* f, char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        fputc(str[i], f);
    }
    fputc('\n', f);
}

int main(void){
    char strings[QTD_STRINGS][TAM_MAX];
    FILE *f;
    f = fopen("saidaEX4.txt", "wb");
    for (int i = 0; i < QTD_STRINGS; i++){
        printf("Digite a string %d\n: ", i + 1);
        scanf("%25s", strings[i]);
    }
    for (int i = 0; i < QTD_STRINGS; i++){
        escreva_string(f, strings[i]);
    }
    fclose(f);
    return 0;
}