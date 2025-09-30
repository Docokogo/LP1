#include <stdio.h>

void preenche (int l, int c, int arr[3][4]){
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

int main(void) {
    int matriz[3][4];
    preenche(3, 4, matriz);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}