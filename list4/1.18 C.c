#include <stdio.h>

int main(){
    int x, y, i;
    printf("Digite os valores a serem analisados: ");
    scanf("%d", &x);
    scanf("%d", &y);
    for(i=2;i<=y;i++){
        if(x%i==0 && y%i==0){
            printf("Nao sao primos entre si");
            return 0;
        }
    }
    printf("Sao primos entre si");
    return 0;
}
