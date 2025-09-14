#include <stdio.h>

void preenche (int* xs, int n){
    int i = 0;
    while (i<n){
        scanf("%d", (xs+i));
        i = i+1;
    }
}

float media (int* xs, int n){
    unsigned int soma = 0;
    int i = 0;
    while(i<n){
        soma = soma + *(xs+i);
        i = i+1;
    }
    return (float)soma/n;
}

int main (void){
    int vec[100];
    int n;
    printf("Digite o numero de digitos: ");
    scanf("%d", &n);
    preenche(vec, n);
    printf("Media: %f\n", media(vec, n));
    return 0;
}