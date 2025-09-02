#include <stdio.h>

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
    int n;
    scanf("%d", &n);
    printf("%d\n", eh_primo(n));
    return 0;
}