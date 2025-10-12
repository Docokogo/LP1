#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *f = fopen("saidaEX1.txt", "rb");
    char texto[26];
    int i = 0;
    char c;
    while ((c = fgetc(f)) != EOF && i < 25){
        texto[i] = c;
        i++;
    }
    texto[i] = '\0';
    fclose(f);
    printf("Conteudo do arquivo: %s", texto);
    return 0;
}