#include <stdio.h>

int main(){
    int n, i;
    double h=0.0;
    printf("Insira o numero de termos desejados: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        h+=1.0/i;
    printf("H = %lf", h);
    return 0;
}
