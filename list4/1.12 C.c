#include <stdio.h>

int main(){
    int num, i;
    printf("Digite o ultimo valor do intervalo fechado: ");
    scanf("%d", &num);
    printf("Os multiplos de 3 e 5 ao mesmo tempo sao:\n");
    for(i=1;i<=num;i++){
        if(i%15==0)
            printf("%d\n", i);
    }
    return 0;
}
