#include <stdio.h>

int main(){
    char sexo;
    float h;
    printf("Insira o sexo('h' para homem ou 'm' para mulher):\n");
    scanf("%c", &sexo);
    printf("Insira o valor da altura: ");
    scanf("%f", &h);
    if(sexo=='h')
        printf("O peso ideal eh %.f kg", 72.7*h-58);
    else
        printf("O peso ideal eh %.f kg", 62.1*h-44.7);
    return 0;
}
