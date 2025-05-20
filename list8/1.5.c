#include <stdio.h>
#include <string.h>

int main(){
    int i, x, y;
    char esta[100];
    struct pes{
        int codp;
        char name[100];
        double sal;
    };
    struct est{
        int code;
        char nome[100];
    };
    struct roupa{
        int codr;
        char desc[200];
        int codp;
        int code;
    };
    struct pes estilista[5];
    struct est estacao[4];
    struct roupa roupa[10];
    for(i=0;i<5;i++){
        printf("Insira os dados do estilista %d\n", i+1);
        printf("Codigo: ");
        scanf("%d%*c", &estilista[i].codp);
        printf("Nome(max 100 caracteres): ");
        gets(estilista[i].name);
        printf("Salario: ");
        scanf("%lf", &estilista[i].sal);
    }
    for(i=0;i<4;i++){
        printf("Insira os dados da estacao %d\n", i+1);
        printf("Codigo: ");
        scanf("%d%*c", &estacao[i].code);
        printf("Nome(max 100 caracteres): ");
        gets(estacao[i].nome);
    }
    for(i=0;i<10;i++){
        printf("Insira os dados da roupa %d\n", i+1);
        printf("Codigo: ");
        scanf("%d%*c", &roupa[i].codr);
        printf("Descricao(max 200 caracteres): ");
        gets(roupa[i].desc);
        printf("Codigo do estilista correspondente: ");
        scanf("%d%*c", &roupa[i].codp);
        printf("Codigo da estacao correspondente: ");
        scanf("%d%*c", &roupa[i].code);
    }
    printf("Insira a estacao desejada: ");
    gets(esta);
    for(i=0;i<4;i++){
        y=strcmp(esta, estacao[i].nome);
        if(y==0){
            y=estacao[i].code;
            i=4;
        }
    }
    for(i=0;i<10;i++){
        if(roupa[i].code==y){
            printf("Codigo de roupa: %d\nDescricao: %s\nCodigo do estilista: %d\nCodigo da estacao: %d\n", roupa[i].codr, roupa[i].desc, roupa[i].codp, roupa[i].code);
        }
    }
    return 0;
}
