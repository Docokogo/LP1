#include <stdio.h>
#include <stdbool.h>

int main (void){
    int n;
    int soma=0;
    while (true){
        scanf("%d", &n);
        if (n==0){
            break;
        }
        soma=soma+n;
    }
    printf("Soma: %d\n", soma);
    return 0;
}
