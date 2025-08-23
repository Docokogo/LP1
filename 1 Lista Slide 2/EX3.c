#include <stdio.h>

int main (void){
    float dollar,real;
    printf("Digite o preco do celular: ");
    scanf("%f", &dollar);
    real=dollar*3.17;
    if(real<=1000){
        printf("BOM NEGOCIO!\n");
    }
    else{
        printf("MAL NEGOCIO!\n");
        return 0;
    }
}