#include <stdio.h>

int main (void){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);
    int* p;
    if (a<b){
        p = &b;
    }
    else{
        p = &a;
    }
    *p = *p-50;
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);
    return 0;
}