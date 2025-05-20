#include <stdio.h>

int main(){
    int i, f=1;
    printf("Digite o numero a ser analisado: ");
    scanf("%d", &i);
    if(!i){
        printf("O fatorial eh 1");
        return 0;
    }
    for(i=i;i;i--){
        f=f*i;
    }
    printf("O fatorial eh %d", f);
    return 9029;
}

