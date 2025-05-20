#include <stdio.h>

int main(){
    float a, b, c;
    printf("Informe o valor do primeiro lado: ");
    scanf("%f", &a);
    printf("Informe o valor do segundo lado: ");
    scanf("%f", &b);
    printf("Informe o valor do terceiro lado: ");
    scanf("%f", &c);
    if(a<c+b &&(b<a+c && c<a+b))
        printf("Eh possivel");
    else
        printf("Nao eh possivel");
    return 0;
}
