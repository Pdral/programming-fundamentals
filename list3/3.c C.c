#include <stdio.h>

int main()
{
    float sm;
    printf("Insira o valor do saldo medio: ");
    scanf("%f", &sm);
    printf("Seu saldo medio foi R$ %.2f\n", sm);
    if(sm>400.0)
        printf("Seu credito especial eh de R$ %.2f", 0.3*sm);
    else if(sm>300.0)
        printf("Seu credito especial eh de R$ %.2f", 0.25*sm);
    else if(sm>200.0)
        printf("Seu credito especial eh de R$ %.2f", 0.2*sm);
    else
        printf("Seu credito especial eh de R$ %.2f", 0.1*sm);
    return 0;
}
