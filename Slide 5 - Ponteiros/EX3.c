#include <stdio.h>

void compra(int* conta,int valor){
    *conta = *conta-valor;
}

int main (void){
    int minha_conta,minha_conta2;
    int compras[] = { 100, 50, 80, 30, 20 };
    char i = 0;
    scanf("%d", &minha_conta);
    scanf("%d", &minha_conta2);
    while (i<5){
        if (minha_conta<minha_conta2){
        compra(&minha_conta2, compras[i]);
    }
    else{
        compra(&minha_conta, compras[i]);
    }
    printf("Conta 1: %d\n", minha_conta);
    printf("Conta 2: %d\n", minha_conta2);
    i = i+1;
    }
    return 0;
}