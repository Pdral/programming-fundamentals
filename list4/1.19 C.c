#include <stdio.h>

int main(){
    int x, i;
    printf("Digite o valor a ser analisado: ");
    scanf("%d", &x);
    printf("Seus divisores sao: ");
    for(i=1;i<=x;i++){
        if(x%i==0){
            printf("%d ", i);
        }
    }
    return 0;
}

