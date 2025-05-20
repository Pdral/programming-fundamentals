#include <stdio.h>

int main(){
    int n;
    printf("Insira a quantidade de termos desejados: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        printf("%d ", i*i);
    return 0;
}
