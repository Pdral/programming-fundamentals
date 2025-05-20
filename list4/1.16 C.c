#include <stdio.h>

int main(){
    int a, b;
    printf("Digite o valor do dividendo: ");
    scanf("%d", &a);
    printf("Digite o valor do divisor: ");
    scanf("%d", &b);
    while(a>=b)
        a-=b;
    printf("O modulo da divisao eh %d", a);
    return 0;
}
