#include <stdio.h>

int main()
{
    float n1, n2;
    int operacao;
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    printf("Digite o numero correspondente a operacao desejada: ");
    scanf("%d", &operacao);
    switch(operacao){
    case 1:
        printf("A media dos numeros eh %.f", (n1+n2)/2.0);
        break;
    case 2:
        if(n1>n2){
            printf("A diferenca eh %.f", n1-n2);
        }
        else
            printf("A diferenca eh %.f", n2-n1);
        break;

    case 3:
        printf("O produto eh %.f", n1*n2);
        break;
    case 4:
        if(n2==0)
            printf("Nao existe divisao por 0");
        else
            printf("%.f", n1/n2);
        break;
    default:
        printf("Operacao invalida");
        break;
    }
    return 0;
}
