#include <stdio.h>

int main(){
    int n, i;
    double soma=0.0, d;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        d=(n-i+1);
        soma=soma+(i/d);
    }
    printf("S = %lf", soma);
    return 0;
}
