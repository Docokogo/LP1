#include <stdio.h>

int tamanho (char* str){
    int t = 0;
    while (str[t] != '\0'){
        t = t+1;
    }
    return t;
}

int main (void){
    char str[100];
    scanf("%99s", str);
    printf("Tamanho da string: %d\n", tamanho(str));
    return 0;
}