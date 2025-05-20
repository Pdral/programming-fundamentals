#include <stdio.h>
#include <math.h>

int main(){
    double cosa, cosb, cosc, A, B, C;
    printf("Insira o valor do primeiro lado: ");
    scanf("%lf", &A);
    printf("Insira o valor do segundo lado: ");
    scanf("%lf", &B);
    printf("Insira o valor do terceiro lado: ");
    scanf("%lf", &C);
    if(A<B+C && (B<A+C && C<A+B)){
        cosa=(B*B+C*C-A*A)/(2*B*C);
        cosb=(A*A+C*C-B*B)/(2*A*C);
        cosc=(B*B+A*A-C*C)/(2*B*A);
        if(!cosa || (!cosb || !cosc))
            printf("Os angulos sao %lf, %lf e %lf", acos(cosa)*90/M_PI_2, acos(cosb)*90/M_PI_2, acos(cosc)*90/M_PI_2);
        else
            printf("O triangulo existe, mas nao eh retagulo");
    }
    else
        printf("O triangulo nao existe");
    return 0;
}
