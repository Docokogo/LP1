#include <stdio.h>

int main (void){
    int n1,n2;
    int maior,menor;
    scanf("%d", &n1);
    scanf("%d", &n2);
    if(n1>n2){
        maior=n1;
        menor=n2;
    }
    else{
        maior=n2;
        menor=n1;
    }
    printf("\n");
    while(menor+1<maior){
        printf("%d\n", menor+1);
        menor=menor+1;
    }
    return 0;
}