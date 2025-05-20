#include <stdio.h>

int main(){
    int peso, idade, gp=4;
    printf("Insira a idade: ");
    scanf("%d", &idade);
    printf("Insira o peso: ");
    scanf("%d", &peso);
    if(idade<20)
        gp=7;
    else if(idade>50)
        gp=1;
    if(peso>60 && peso<=90)
        gp=gp+1;
    else if(peso<=60)
        gp=gp+2;
    printf("Seu grupo de risco eh %d", gp);
    return 0;
}
