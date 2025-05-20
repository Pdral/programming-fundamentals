#include <stdio.h>

int main(){
    float x;
    printf("Insira o valor de x: ");
    scanf("%f", &x);
    if(x>3)
        printf("f(x) = %f", x*x*x);
    else if(x>2)
        printf("f(x) = %f", x*x);
    else if(x>1)
        printf("f(x) = 2");
    else
        printf("f(x) = 1");
    return 0;
}
