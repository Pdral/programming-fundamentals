#include <stdio.h>

int main(){
    int a, b, aux, n,  i;
    printf("Insira o valor dos dois primeiro numeros da sequencia de FETUCCINI: ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Digite a quantidade de termos desejados: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        if(!i)
            printf("%d ", a);
        else if(i==1)
            printf("%d ", b);
        else if(i%2==0){
            printf("%d ", a+b);
            aux=b;
            b=a+b;
            a=aux;
        }
        else{
            printf("%d ", b-a);
            aux=b;
            b=b-a;
            a=aux;
        }
    }
    return 0;
}
