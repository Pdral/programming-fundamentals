#include <stdio.h>

int main(){
    int x;
    printf("Digite o numero a ser analisado: ");
    scanf("%d", &x);
    if(x%3==0)
        printf("eh multiplo de 3");
    else
        printf("nao eh multiplo de 3");
    return 0;
}
