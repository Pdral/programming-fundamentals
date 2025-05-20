#include <stdio.h>

int main(){
    int b, i;
    double a, produto=0.0;
    printf("Digite o fator real: ");
    scanf("%lf", &a);
    printf("Digite o fator inteiro: ");
    scanf("%d", &b);
    for(i=0;i<b;i++)
        produto+=a;
    printf("O produto eh %.2lf", produto);
    return 0;
}
