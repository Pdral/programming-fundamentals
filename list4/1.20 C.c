#include <stdio.h>

int main(){
    int n, i=2, count=0, j, p=1;
    printf("Digite a quantidade de numeros primos desejados: ");
    scanf("%d", &n);
    do{
        p=1;
        for(j=2;j<i;j++){
            if(i%j==0)
                p=0;
        }
        if(p){
            printf("%d ", i);
            count++;
        }
        i++;
    }while(count!=n);
    return 0;
}
