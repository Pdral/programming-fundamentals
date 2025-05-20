#include <stdio.h>

int main(){
    int i, j, f;
    double x, soma=0;
    printf("Digite o valor de X: ");
    scanf("%lf", &x);
    for(i=0;i<19;i++){
        if(!i)
            soma=x;
        else if(i%2==0){
            f=1;
            for(j=i;j>0;j--)
                f=f*j;
            soma+=x/f;
        }
        else{
            f=1;
            for(j=i;j>0;j--)
                f=f*j;
            soma-=x/f;
        }
    }
    printf("O somatorio eh %lf", soma);
    return 0;
}
