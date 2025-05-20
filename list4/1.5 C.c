#include <stdio.h>
#include <math.h>

int main(){
    int maior=-9999, x;
    printf("Insira os numeros, ao acabar digite -9999\n");
    do{
        scanf("%d", &x);
        if(x>maior)
            maior=x;
    }while(x!=-9999);
    printf("O maior valor digitado foi %d", maior);
    return 9029;
}
