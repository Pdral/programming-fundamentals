#include <stdio.h>
#include <string.h>


int main(){
    struct banco{
        int num;
        float sal;
        char tipo[35];
    };
    int i, n, x, z, t;
    float y;
    char ope[20];
    printf("Insira o numero de contas desejado: ");
    scanf("%d%*c", &n);
    struct banco conta[n];
    for(i=0;i<3;i++){
        printf("Digite o numero correspondete a conta %d: ", i+1);
        scanf("%d%*c", &conta[i].num);
        conta[i].sal=0.0;
    }
    while(strcmp(ope, "0")!=0){
        printf("Insira a proxima operacao (Creditar, Debitar, Transferir, Saldo, 0): ");
        gets(ope);
        if(strcmp(ope, "Creditar")==0){
            printf("Insira o valor a ser creditado: ");
            scanf("%f%*c", &y);
            printf("Insira o numero da conta desejada: ");
            scanf("%d%*c", &x);
            t=0;
            for(i=0;i<n;i++){
                if(conta[i].num==x){
                    conta[i].sal-=y;
                    printf("Operacao realizada com sucesso.\n");
                    t=1;
                    i=n;
                }
            }
            if(t==0){
                printf("Conta nao encontrada\n");
            }
        }
        else if(strcmp(ope, "Debitar")==0){
            printf("Insira o valor a ser debitado: ");
            scanf("%f%*c", &y);
            printf("Insira o numero da conta desejada: ");
            scanf("%d%*c", &x);
            t=0;
            for(i=0;i<n;i++){
                if(conta[i].num==x){
                    conta[i].sal+=y;
                    printf("Operacao realizada com sucesso.\n");
                    t=1;
                    i=n;
                }
            }
            if(t==0){
                printf("Conta nao encontrada\n");
            }
        }
        else if(strcmp(ope, "Transferir")==0){
            printf("Insira o valor a ser transferido: ");
            scanf("%f%*c", &y);
            printf("Insira o numero da conta de partida: ");
            scanf("%d%*c", &x);
            t=0;
            for(i=0;i<n;i++){
                if(conta[i].num==x){
                    x=i;
                    t=1;
                }
            }
            if(t==0){
                printf("Conta nao encontrada.\n");
            }
            else{
                printf("Insira o numero da conta de destino: ");
                scanf("%d%*c", &z);
                t=0;
                for(i=0;i<n;i++){
                    if(conta[i].num==z){
                        z=i;
                        t=1;
                    }
                }
                if(t==0){
                    printf("Conta nao encontrada.\n");
                }
                else{
                    if(z==x){
                        printf("Operacao invalida.\n");
                    }
                    else{
                        conta[z].sal+=y;
                        conta[x].sal-=y;
                        printf("Operacao realizada com sucesso.\n");
                    }
                }
            }
        }
        else if(strcmp(ope, "Saldo")==0){
            printf("Insira o numero da conta desejada: ");
            scanf("%d%*c", &x);
            t=0;
            for(i=0;i<n;i++){
                if(x==conta[i].num){
                    printf("Saldo = %.2f\n", conta[i].sal);
                    t=1;
                    i=n;
                }
            }
            if(t==0){
                printf("Conta nao encontrada\n");
            }
        }
    }
    for(i=0;i<n;i++){
        printf("Conta %d\nSaldo: %.2f\n", conta[i].num, conta[i].sal);
    }
    return ;
}

