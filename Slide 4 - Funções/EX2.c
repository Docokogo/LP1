#include <stdio.h>

int todos_os_primos (int x){
    int i=2;
    if(x<3){
        return 0;
    }
    else{
        while(i<x){
            printf("%d\n", eh_primo(i));
            i=i+1;
        }
    }
}

int eh_primo(int x){
    int i=x-1;
    while(1<i){
        if(x%i==0){
            return 0;
        }
        i=i-1;
    }
    if(x==1){
        return 0;
    }
    return 1;
}

int main (void){
    int max;
    scanf("%d", &max);
    printf("%d\n", todos_os_primos(max));
    return 0;
}