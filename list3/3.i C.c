#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;
    printf("Informe o valor dos coeficientes\nA= ");
    scanf("%f", &a);
    printf("B= ");
    scanf("%f", &b);
    printf("C= ");
    scanf("%f", &c);
    delta=b*b-4*a*c;
    if(delta<0)
        printf("Nao ha raizes reais");
    else{
        x1=(-b+sqrt(delta))/2*a;
        x2=(-b-sqrt(delta))/2*a;
        printf("As raizes sao %.2f e %.2f", x1, x2);
    }
    return 0;
}
