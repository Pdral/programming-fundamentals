#include <stdio.h>
#include <math.h>

int main(){
    int i, j;
    double x, s=0.0, n=1.0, d=1.0;
    printf("Insira o valor de n: ");
    scanf("%lf", &x);
    for(i=0;i<=x;i++){
        n=1.0;
        d=1.0;
        for(j=i*2;j>0;j--)
            d=d*j;
        for(j=x-i;j>0;j--)
            n=n*j;
        if(i%2==0)
            s=s + (n/d);
        else
            s=s - (n/d);
    }
    printf("O valor de s eh %lf", s);
    return 0;
}
