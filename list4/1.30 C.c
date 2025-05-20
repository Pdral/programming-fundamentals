#include <stdio.h>

int main(){
    int i;
    double soma=1.0, d;
    for(i=1;i<120;i++){
        d=2*i;
        if(i%2)
            soma-=1/d;
        else
            soma+=1/d;
    }
    printf("O valor desse expressao eh %lf", soma);
    return 0;
}
