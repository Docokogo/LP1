#include <stdio.h>

void preenche (int arr[2][3], int l, int c){
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf("Preencha [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

float media (int arr[2][3], int l, int c){
    int soma = 0;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            soma += arr[i][j];
        }
    }
    return (float)soma/(l*c);
}

int main (void){
    int arr[2][3];
    preenche(arr, 2, 3);
    printf("Media: %f\n", media(arr, 2, 3));
    return 0;
}