#include <stdio.h>

int main(){
    float cosa, cosb, cosc, A, B, C;
    printf("Insira o valor do primeiro lado: ");
    scanf("%f", &A);
    printf("Insira o valor do segundo lado: ");
    scanf("%f", &B);
    printf("Insira o valor do terceiro lado: ");
    scanf("%f", &C);
    if(A<B+C && (B<A+C && C<A+B)){
        cosa=(B*B+C*C-A*A)/(2*B*C);
        cosb=(A*A+C*C-B*B)/(2*A*C);
        cosc=(B*B+A*A-C*C)/(2*B*A);
        if(!cosa || (!cosb || !cosc))
            printf("O triangulo eh retangulo");
        else if(cosa<0 || (cosb<0 || cosc<0))
            printf("O triangulo eh obtusangulo");
        else
            printf("O triangulo eh acutangulo");
    }
    else
        printf("O triangulo nao existe");
    return 0;
}
