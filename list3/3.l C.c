#include <stdio.h>

int main(){
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d",&a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    if(a%b==0)
        printf("%d eh divisivel por %d", a, b);
    else
        printf("%d nao eh divisivel por %d", a, b);
    return 0;
}
