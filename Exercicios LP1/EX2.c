#include <stdio.h>

int main (void){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>y){
        printf("Maior: %d\n",x);
    }
    else{
        printf("Maior: %d\n",y);
    }
}