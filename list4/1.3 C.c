#include <stdio.h>

int main(){
    int i, m=0, x;
    float n;
    printf("Quantos numeros serao fornecidos?\n");
    scanf("%f", &n);
    for(i=0;i<n;i++){
        scanf("%d", &x);
        m = m+x ;
    }
    printf("A media eh %.1f", m/n);
    return 0;
}
