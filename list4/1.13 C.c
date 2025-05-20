#include <stdio.h>

int main(){
    int n, par=0, impar=0, i, x;
    printf("Insira a quantidade de numeros a serem fornecidos: ");
    scanf("%d", &n);
    printf("Digite os valores:\n");
    for(i=0;i<n;i++){
        scanf("%d", &x);
        if(x%2==0)
            par++;
        else
            impar++;
    }
    printf("Foram digitados %d numero(s) pares e %d numero(s) impares", par, impar);
    return 0;
}
