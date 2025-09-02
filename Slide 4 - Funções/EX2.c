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

int todos_os_primos (int x){
    int i=x-1;
    if(x<3){
        return 0;
    }
    else{
        while(1<i){
            if(eh_primo(i)==1){
                printf("%d\n", i);
            }
            i=i-1;
        }
    }
}

int main (void){
    int max;
    scanf("%d", &max);
    todos_os_primos(max);
    return 0;
}