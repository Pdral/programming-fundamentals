#include <stdio.h>

int main(){
    int i, mf=0;
    double ms=0, maior=0, tmf, q=0;
    struct hab{
    double sal;
    int idade;
    char sexo;
    int filhos;
    };
    struct hab hab[20];
    for(i=0;i<20;i++){
        printf("Insira as informacoes do habitante %d\n", i+1);
        printf("Salario: ");
        scanf("%lf", &hab[i].sal);
        printf("Idade: ");
        scanf("%d%*c", &hab[i].idade);
        printf("Sexo(m ou f): ");
        scanf("%c", &hab[i].sexo);
        printf("Numero de filhos: ");
        scanf("%d", &hab[i].filhos);
        if(hab[i].sal>maior){
            maior=hab[i].sal;
        }
        ms+=hab[i].sal;
        mf+=hab[i].filhos;
        if(hab[i].sexo=='f'){
            if(hab[i].sal>10000.0){
                q++;
            }
        }
    }
    ms=ms/20;
    tmf=mf;
    tmf=tmf/20;
    printf("Media dos salarios: %.2lf\n", ms);
    printf("Media do numero de filhos: %.1lf\n", tmf);
    printf("Maior salario: %.2lf\n", maior);
    printf("Porcentagem de mulheres com mais de 10.000: %.2lf %", (q/20)*100);
    return 0;
}
