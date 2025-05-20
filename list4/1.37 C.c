#include <stdio.h>

int main(){
    int codigo, i, qm=0;
    double h, mm=0.0, mt=0.0, maior=0.0, menor=999999.0;
    printf("Insira os valores relativos a cada ficha,\nprimeiro a altura e, depois, o codigo:\n");
    for(i=0;i<50;i++){
        scanf("%lf", &h);
        scanf("%d", &codigo);
        mt+=h;
        if(h>maior)
            maior=h;
        if(h<menor)
            menor=h;
        if(codigo==2){
            qm++;
            mm+=h;
        }
    }
    printf("A maior altura da turma eh %lf\nA menor altura da turma eh %lf\nA media das alturas das mulheres eh %lf\nA media das alturas da turma eh %lf", maior,menor,mm/qm,mt/50);
    return 0;
}
