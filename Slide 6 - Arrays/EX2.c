#include <stdio.h>

#define L 3
#define C 4

float media(int arr[L][C], int l, int c) {
    int soma = 0;
    int total = l * c;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            soma += arr[i][j];
        }
    }
    return (float)soma / total;
}

int main(void) {
    int matriz[L][C] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    float m = media(matriz, L, C);
    printf("Media = %.2f\n", m);
    return 0;
}