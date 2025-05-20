#include <stdio.h>

int main()
{
    float salario;
    printf("Digite o valor do salario: ");
    scanf("%f", &salario);
    if(salario < 900.0){
        printf("Seu novo salario eh R$ %.2f", 1.3*salario);
    }
    else
        printf("Nao houve aumento aumento");
    return 0;
}
