#include <stdio.h>

void compra(int* conta,int valor){
    *conta = *conta-valor;
}

int main (void){
    int minha_conta,minha_conta2;
    scanf("%d", &minha_conta);
    scanf("%d", &minha_conta2);
    if (minha_conta<minha_conta2){
        compra(&minha_conta2,500);
    }
    else{
        compra(&minha_conta,500);
    }
    printf("Conta 1: %d\n", minha_conta);
    printf("Conta 2: %d\n", minha_conta2);
    return 0;
}