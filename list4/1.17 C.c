#include <stdio.h>

int main(){
    int a, b, quociente=0;
    printf("Digite o valor do dividendo: ");
    scanf("%d", &a);
    printf("Digite o valor do divisor: ");
    scanf("%d", &b);
    while(a>=b){
        a-=b;
        quociente++;
    }
    printf("O quociente da divisao eh %d", quociente);
    return 0;
}

