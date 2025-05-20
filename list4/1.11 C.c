#include <stdio.h>

int main(){
    int a, b, i, soma=0;
    printf("Digite o primeiro valor do intervalo aberto: ");
    scanf("%d", &a);
    printf("Digite o ultimo valor do intervalo aberto: ");
    scanf("%d", &b);
    printf("Os valores pares contidos nesse intervalo sao:\n");
    for(i=a+1;i<b;i++){
        if(i%2==0){
            printf("%d\n", i);
            soma+=i;
        }
    }
    printf("E sua soma eh %d", soma);
    return 0;
}
