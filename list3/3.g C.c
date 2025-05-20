#include <stdio.h>

int main()
{
    int idade;
    printf("Insira a idade do nadador: ");
    scanf("%d", &idade);
    if(idade<5)
        printf("ERRO");
    else if(idade<8)
        printf("Sua categoria eh Infantil");
    else if(idade<11)
        printf("Sua categoria eh Infanto-Juvenil");
    else if(idade <16)
        printf("Sua categoria eh Juvenil");
    else if(idade<31)
        printf("Sua categoria eh Adulto");
    else
        printf("Sua categoria eh Master");
    return 0;
}
