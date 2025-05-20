#include <stdio.h>
#include <math.h>

int main (){
    int a=1, m=1;
    printf("Digite os numeros a serem multiplicados:\n(Apos o ultimo, digite 0)\n");
    do{
      m=m*a;
      scanf("%d", &a);
    }
    while(a);
    printf("O produto eh %d", m);
    return 0;
}
