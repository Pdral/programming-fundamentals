#include <stdio.h>

int main (){
    float preco;
    printf("Insira o valor do produto: ");
    scanf("%f", &preco);
    if(preco>100.0)
        preco=preco*1.15;
    else if(preco>50.0)
        preco = preco*1.1;
    else
        preco=preco*1.05;
    if(preco>200.0)
        printf("O novo preco eh R$ %.2f e sua classe eh A", preco);
    else if(preco>120.0)
        printf("O novo preco eh R$ %.2f e sua classe eh B", preco);
    else if(preco>80.0)
        printf("O novo preco eh R$ %.2f e sua classe eh C", preco);
    else
        printf("O novo preco eh R$ %.2f e sua classe eh D", preco);
    return 0;
}
