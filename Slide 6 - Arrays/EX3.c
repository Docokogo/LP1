#include <stdio.h>

#define L 3
#define C 3

float determinante(int arr[L][C], int n) {
    if (n == 2) {
        return arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0];
    } else if (n == 3) {
        return arr[0][0]*(arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1])
             - arr[0][1]*(arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0])
             + arr[0][2]*(arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0]);
    } else {
        printf("Determinante apenas para 2x2 ou 3x3!\n");
        return 0;
    }
}

int main(void) {
    int matriz[L][C] = {
        {1, 2, 3},
        {0, 4, 5},
        {1, 0, 6}
    };
    printf("Determinante = %.2f\n", determinante(matriz, L));
    return 0;
}