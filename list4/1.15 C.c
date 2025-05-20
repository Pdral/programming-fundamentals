#include <stdio.h>

int main(){
    int b, i;
    double a, potencia=1.0;
    printf("Digite o valor da base: ");
    scanf("%lf", &a);
    printf("Digite o valor do expoente: ");
    scanf("%d", &b);
    for(i=0;i<b;i++)
        potencia*=a;
    printf("A potencia eh %.2lf", potencia);
    return 0;
}

