#include <stdio.h>

int main(){
    int i, n, x=1;
    printf("Insira a quantidade de termos desejados: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(i%3==1)
            printf("%d ", x);
        else
            printf("%d ", x+3);
        if(i%3==0)
            x++;
    }
    return 0;
}
