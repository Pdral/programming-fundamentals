#include <stdio.h>

int main(){
    int n;
    double i, soma=0.0;
    printf("Insira o valor de n: ");
    scanf("%d",&n);
    for(i=1.0;i<=n;i++)
        soma+=i/(i*i);
    printf("S = %lf", soma);
    return 0;
}
