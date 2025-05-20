#include <stdio.h>
#include <string.h>

int main(){
    int t=0, i, o=0, x, j;
    char com[100], af[100];
    struct obra{
        int nt, ne, dia, mes, ano;
    };
    struct tombo{
        int nt, ano, num;
        char no[100], na[100], ne[100];
    };
    struct obra obra[60];
    struct tombo tombo[20];
    for(i=0;i<20;i++){
        tombo[i].num=0;
    }
    while(strcmp("Encerrar o programa", com)!=0){
        printf("Insira a proxima operacao: ");
        gets(com);
        if(strcmp("Cadastrar tombo", com)==0){
            if(t!=20){
                printf("Numero do tombo: ");
                scanf("%d%*c", &tombo[t].nt);
                printf("Nome da obra: ");
                gets(tombo[t].no);
                printf("Nome do autor: ");
                gets(tombo[t].na);
                printf("Nome da editora: ");
                gets(tombo[t].ne);
                printf("Ano: ");
                scanf("%d%*c", &tombo[t].ano);
                t++;
            }
            else{
                printf("Numero maximo de tombos atingido\n");
            }
        }
        if(strcmp("Cadastrar obra", com)==0){
            if(o!=60){
                printf("Numero do tombo: ");
                scanf("%d%*c", &obra[o].nt);
                if(t==0){
                    printf("Nao ha tombos cadastrados\n");
                }
                for(i=0;i<t;i++){
                    if(tombo[i].nt==obra[o].nt){
                        if(tombo[i].num==3){
                            printf("O numero maximo de obras para este tombo foi atingido\n");
                        }
                        else{
                            tombo[i].num++;
                            printf("Numero do exemplar: ");
                            scanf("%d%*c", &obra[o].ne);
                            printf("Data de compra(00/00/00): ");
                            scanf("%d/%d/%d%*c", &obra[o].dia, &obra[o].mes, &obra[o].ano);
                            o++;
                        }
                        i=t;
                    }
                    else if(i==t-1){
                        printf("Este tombo nao esta cadastrado\n");
                    }
                }
            }
            else{
                printf("Numero maximo de obras atingido\n");
            }
        }
        if(strcmp("Mostrar obras por ano", com)==0){
            printf("Insira o ano desejado: ");
            scanf("%d%*c", &x);
            for(i=0;i<o;i++){
                if(obra[i].ano==x){
                    for(j=0;j<t;j++){
                        if(tombo[j].nt==obra[i].nt){
                            printf("Nome da obra: %s\nAutor: %s\nEditora: %s\nExemplar %d\n\n", tombo[j].no, tombo[j].na, tombo[j].ne, obra[i].ne);
                            j=t;
                        }
                    }
                }
            }
        }
        if(strcmp("Mostrar obras por autor", com)==0){
            printf("Insira o autor desejado: ");
            gets(af);
            for(i=0;i<t;i++){
                if(strcmp(af, tombo[i].na)==0){
                    printf("%s\nEditora: %s\nAno: %d%*c\n\n", tombo[i].no, tombo[i].ne, tombo[i].ano);
                }
            }
        }
        if(strcmp("Mostrar obras por editora", com)==0){
            printf("Insira a editora desejada: ");
            gets(af);
            for(i=0;i<t;i++){
                if(strcmp(af, tombo[i].ne)==0){
                    printf("%s\nAutor: %s\nAno: %d%*c\n\n", tombo[i].no, tombo[i].na, tombo[i].ano);
                }
            }
        }
    }
    return 0;
}
