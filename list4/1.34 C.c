#include <stdio.h>
#include <math.h>

int main(){
    int i, j;
    double x, cosseno=1.0, f=1.0;
    printf("Insira o valor do angulo em graus: ");
    scanf("%lf", &x);
    for(i=1;i<15;i++){
        f=1.0;
        for(j=(2*i);j>0;j--)
            f=f*j;
        if(i%2==0)
            cosseno=cosseno + (pow(x, 2*i)/f);
        else
            cosseno=cosseno - (pow(x, 2*i)/f);
    }
    printf("O valor do cosseno eh %lf", cosseno);
    return 0;
}

