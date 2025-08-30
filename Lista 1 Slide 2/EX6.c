#include <stdio.h>

int main (void){
    int n;
    int soma=0;
    int i=1;
    scanf("%d", &n);
    while(i<=n){
        soma=soma+i*i;
        i=i+1;
    }
    printf("Resultado do somatorio: %d\n", soma);
    return 0;
}