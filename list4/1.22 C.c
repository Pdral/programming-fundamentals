#include <stdio.h>

int main(){
    int i, n, a=1, b=1, x;
    printf("Digite o numero de termos desejados: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(i==1 || i==2)
            printf("1 ");
        else{
            printf("%d ", a+b);
            x=b;
            b=a+b;
            a=x;
        }
    }
    return 0;
}
