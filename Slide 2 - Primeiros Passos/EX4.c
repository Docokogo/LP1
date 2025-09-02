#include <stdio.h>

int main (void){
    float mph,kph;
    printf("Digite a velocidade em mph: ");
    scanf("%f",&mph);
    kph=mph*1.6;
    if (kph<80){
        printf("ACELERE\n");
    }
    else if(kph>100){
        printf("DESACELERE\n");
    }
    else{
        printf("MANTENHA\n");
    }
    return 0;
}