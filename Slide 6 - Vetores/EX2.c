#include <stdio.h>

void printar (int i, int* vet){
    printf("\n");
    while (i<5){
        printf("%d\n", vet[i]);
        i = i+1;
    }
    printf("\n");
}

int main (void){
    int vet [5];
    int i = 0;
    int I;
    while (i<5){
        scanf("%d", &vet[i]);
        i = i+1;
    }
    i = 0;
    printar(i, vet);
    printf("Escolha uma posicao para remover: ");
    scanf("%d", &I);
    while (I<5){
        vet[I] = vet[I+1];
        I = I+1;
    }
    vet[5] = 0;
    printar(i, vet);
    return 0;
}