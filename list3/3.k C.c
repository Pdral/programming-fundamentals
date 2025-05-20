#include <stdio.h>

int main(){
    int x;
    printf("Digite o numero a ser analisado: ");
    scanf("%d", &x);
    if(x%5==0)
        printf("eh divisivel por 5");
    else
        printf("nao eh divisivel por 5");
    return 0;
}
