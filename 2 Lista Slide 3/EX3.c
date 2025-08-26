#include <stdio.h>

int main (void){
    char temps[50];
    char i=0;
    char acima=0;
    int media=0;
    while(i<50){
        scanf("%hhd", &temps[i]);
        media=media+temps[i];
        i=i+1;
    }
    media=media/50;
    i=0;
    while(i<50){
        if(temps[i]>media){
            acima=acima+1;
        }
        i=i+1;
    }
    printf("Quantidade de leituras acima da media: %d\n",acima);
    return 0;
}