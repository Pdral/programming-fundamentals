#include <stdio.h>
#include <math.h>

int main(){
    int i, j;
    double x, e=0.0, f=1.0;
    printf("Insira o valor do angulo em graus: ");
    scanf("%lf", &x);
    for(i=0;i<14;i++){
        f=1.0;
        for(j=i;j>0;j--)
            f=f*j;
        e=e + (pow(x, i)/f);
    }
    printf("O valor de e^x eh %lf", e);
    return 0;
}

