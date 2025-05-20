#include <stdio.h>

int main(){
    double mp=0.0, mi=0.0, qp=0.0, qi=0.0;
    int x=-1, maior=-1, menor=-1;
    printf("Digite quantos valores desejar.\nAo acabar, digite um valor negativo\n");
    do{
        if(x>-1){
            if(x%2==0){
                if(x>maior)
                    maior=x;
                mp+=x;
                qp++;
            }
            else{
                if(menor==-1)
                    menor=x;
                else if(x<menor)
                    menor=x;
                mi+=x;
                qi++;
            }
        }
        scanf("%d", &x);
    }while(x>-1);
    if(maior<0 && menor<0){
        printf("Valor invalido");
        return 0;
    }
    if(maior<0)
        printf("Nao foram digitados valores pares\nA media dos valores impares eh %lf\nO menor valor impar eh %d", mi/qi, menor);
    else if(menor<0)
        printf("A media dos valores pares eh %lf\nO maior valor par eh %d\nNao foram digitados valores impares", mp/qp, maior);
    else
        printf("A media dos valores pares eh %lf\nA media dos valores impares eh %lf\nO maior valor par eh %d\nO menor valor impar eh %d", mp/qp, mi/qi, maior,menor);
    return 0;
}
