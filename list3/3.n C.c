#include <stdio.h>

int main(){
    float a, b, c;
    printf("Informe o valor do primeiro lado: ");
    scanf("%f", &a);
    printf("Informe o valor do segundo lado: ");
    scanf("%f", &b);
    printf("Informe o valor do terceiro lado: ");
    scanf("%f", &c);
    if(a<c+b &&(b<a+c && c<a+b)){
        if(a==b && b==c)
            printf("O triangulo eh equilatero");
        else if(a==b ||(a==c || b==c))
            printf("O triangulo eh isosceles");
        else
            printf("O triangulo eh escaleno");
    }
    else
        printf("Esse triangulo nao existe");
    return 0;
}
