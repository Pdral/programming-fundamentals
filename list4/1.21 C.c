#include <stdio.h>

int main(){
    int a, b, i, mdc;
    printf("Insira os dois valores a serem analisados: ");
    scanf("%d", &a);
    scanf("%d", &b);
    for(i=1;i<=a;i++){
        if(a%i==0 && b%i==0)
            mdc=i;
    }
    printf("O mdc eh %d", mdc);
    return 0;
}
