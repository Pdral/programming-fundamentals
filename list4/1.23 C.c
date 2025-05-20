#include <stdio.h>

int main(){
    int a, b, soma, aux, n,  i;
    printf("Insira o valor dos dois primeiro numeros da sequencia de RICCI: ");
    scanf("%d", &a);
    scanf("%d", &b);
    soma=a+b;
    printf("Digite a quantidade de termos desejados: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        if(!i)
            printf("%d ", a);
        else if(i==1)
            printf("%d ", b);
        else{
            printf("%d ", a+b);
            soma+=a+b;
            aux=b;
            b=a+b;
            a=aux;
        }
    }
    printf("\nE a soma dos termos eh %d", soma);
    return 0;
}
