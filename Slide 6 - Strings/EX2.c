#include <stdio.h>

int tamanho (char* str){
    int t = 0;
    while (str[t] != '\0'){
        t = t+1;
    }
    return t;
}

void concatena (char* d, char* o1, char* o2){
    int i = 0;
    int j = 0;
    for(i = 0; o1[i] != '\0'; i++){
        d[i] = o1[i];
    }
    for(j = 0; o2[j] != '\0'; j++){
        d[i + j] = o2[j];
    }
    d[i + j] = '\0';
}

int main (void){
    char d[100];
    char o1[100],o2[100];
    scanf("%99s", o1);
    scanf("%99s", o2);
    concatena(d, o1, o2);
    printf("Resultado: %s\n", d);
    return 0;
}