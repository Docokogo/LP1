#include <stdio.h>

int main (void){
    int vitorias,derrotas,empates,pontos,n,maior,menor;
    int times=0;
    int max=-1;
    int min=-1;
    while(times<20){
        scanf("%d", &n);
        scanf("%d", &vitorias);
        scanf("%d", &derrotas);
        scanf("%d", &empates);
        pontos=empates+vitorias*3;
        if(pontos>max||max==-1){
            max=pontos;
            maior=n;
        }
        if(pontos<min||min==-1){
            min=pontos;
            menor=n;
        }
        times=times+1;
    }
    printf("Time com mais pontos: %d\n", maior);
    printf("Time com menos pontos %d\n", menor);
    return 0;
}