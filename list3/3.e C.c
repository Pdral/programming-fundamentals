#include <stdio.h>

int main(){
    int tipo;
    float i;
    printf("Insira o valor do investimento: ");
    scanf("%f", &i);
    printf("Digite o numero correspondente ao tipo de investimento\n(1 para poupança  ou 2 para fundo de renda fixa): ");
    scanf("%d", &tipo);
    if(tipo==1)
        printf("Apos 1 mes, o valor sera de R$ %.2f", i*1.1);

    else
        printf("Apos 1 mes, o valor sera de R$ %.2f", i*1.15);
    return 0;
}
