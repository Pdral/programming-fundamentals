#include <stdio.h>
#include <string.h>

int main(){
    int i, p=0, c=0, t, f=0, j, maior=0;
    char com[100], resp[10];
    struct part{
        char sigla[10];
        int casos;
    };
    struct prop{
        char data[10], desc[200], pol[100], partido[10];
        double valor;
    };
    struct prop caso[1000];
    while(strcmp(com, "nao")!=0){
        printf("Deseja cadastrar mais um crime?(sim ou nao): ");
        gets(com);
        if(strcmp(com, "nao")!=0){
            printf("Data: ");
            gets(caso[c].data);
            printf("Valor: ");
            scanf("%lf%*c",&caso[c].valor);
            printf("Descricao: ");
            gets(caso[c].desc);
            printf("Nome do politico: ");
            gets(caso[c].pol);
            printf("Sigla do partido: ");
            gets(caso[c].partido);
            t=0;
            for(i=0;i<c;i++){
                if(strcmp(caso[c].partido, caso[i].partido)==0){
                    t=1;
                }
            }
            if(t==0){
                p++;
            }
            c++;
        }
    }
    struct part fim[p];
    for(i=0;i<p;i++){
        fim[i].casos=0;
        strcpy(fim[i].sigla, "a");
    }
    for(i=0;i<c;i++){
        t=0;
        for(j=0;j<f;j++){
            if(strcmp(caso[i].partido, fim[j].sigla)==0){
                fim[j].casos++;
                t=1;
            }
        }
        if(t==0){
            fim[f].casos=1;
            strcpy(fim[f].sigla, caso[i].partido);
            f++;
        }
    }
    for(i=0;i<p;i++){
        if(fim[i].casos>maior){
            maior=fim[i].casos;
            strcpy(resp, fim[i].sigla);
        }
    }
    printf("O partido que recebeu mais propina foi o %s", resp);
    return 0;
}
