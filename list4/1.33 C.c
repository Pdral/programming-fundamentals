#include <stdio.h>
#include <math.h>

int main(){
    int i, j;
    double x, seno=0.0, f=1.0;
    printf("Insira o valor do angulo em graus: ");
    scanf("%lf", &x);
    for(i=0;i<15;i++){
        f=1.0;
        for(j=(2*i+1);j>0;j--)
            f=f*j;
        if(i%2==0)
            seno=seno + (pow(x, 2*i+1)/f);
        else
            seno=seno - (pow(x, 2*i+1)/f);
    }
    printf("O valor do seno eh %lf", seno);
    return 0;
}
