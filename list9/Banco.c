#include <stdio.h>
#include <string.h>


int main(){
    int num1, num2, num3, i, x, z;
    char ope[20], tipo1[35], tipo2[35], tipo3[35];
    float sal1=0.0, sal2=0.0, sal3=0.0, y;
    printf("Digite o numero correspondete a conta 1 : ");
    scanf("%d%*c", &num1);
    printf("Digite o numero correspondete a conta 2 : ");
    scanf("%d%*c", &num2);
    printf("Digite o numero correspondete a conta 3 : ");
    scanf("%d%*c", &num3);
    while(strcmp(ope, "0")!=0){
        printf("Insira a proxima operacao (Creditar, Debitar, Transferir, Saldo, 0): ");
        gets(ope);
        if(strcmp(ope, "Creditar")==0){
            printf("Insira o valor a ser creditado: ");
            scanf("%f%*c", &y);
            printf("Insira o numero da conta desejada: ");
            scanf("%d%*c", &x);
            if(x==num1){
                sal1-=y;
                printf("Operacao realizada com sucesso.\n");
            }
            else if(x==num2){
                sal2-=y;
                printf("Operacao realizada com sucesso.\n");
            }
            else if(x==num3){
                sal3-=y;
                printf("Operacao realizada com sucesso.\n");
            }
            else{
                printf("Conta nao encontrada\n");
            }
        }
        else if(strcmp(ope, "Debitar")==0){
            printf("Insira o valor a ser debitado: ");
            scanf("%f%*c", &y);
            printf("Insira o numero da conta desejada: ");
            scanf("%d%*c", &x);
            if(x==num1){
                sal1+=y;
                printf("Operacao realizada com sucesso.\n");
            }
            else if(x==num2){
                sal2+=y;
                printf("Operacao realizada com sucesso.\n");
            }
            else if(x==num3){
                sal3+=y;
                printf("Operacao realizada com sucesso.\n");
            }
            else{
                printf("Conta nao encontrada\n");
            }
        }
        else if(strcmp(ope, "Transferir")==0){
            printf("Insira o valor a ser transferido: ");
            scanf("%f%*c", &y);
            printf("Insira o numero da conta de partida: ");
            scanf("%d%*c", &x);
            if(x==num1){
                printf("Insira a conta de destino: ");
                scanf("%d%*c", &z);
                if(z==num1){
                    printf("Operacao invalida\n");
                }
                else if(z==num2){
                    sal2+=y;
                    sal1-=y;
                    printf("Operacao realizada com sucesso.\n");
                }
                else if(z==num3){
                    sal3+=y;
                    sal1-=y;
                    printf("Operacao realizada com sucesso.\n");
                }
                else{
                    printf("Conta nao encontrada\n");
                }
            }
            else if(x==num2){
                printf("Insira a conta de destino: ");
                scanf("%d%*c", &z);
                if(z==num1){
                    sal2-=y;
                    sal1+=y;
                    printf("Operacao realizada com sucesso.\n");
                }
                else if(z==num2){
                    printf("Operacao invalida.\n");
                }
                else if(z==num3){
                    sal3+=y;
                    sal2-=y;
                    printf("Operacao realizada com sucesso.\n");
                }
                else{
                    printf("Conta nao encontrada\n");
                }
            }
            else if(x==num3){
                printf("Insira a conta de destino: ");
                scanf("%d%*c", &z);
                if(z==num1){
                    sal1+=y;
                    sal3-=y;
                    printf("Operacao realizada com sucesso.\n");
                }
                else if(z==num2){
                    sal2+=y;
                    sal3-=y;
                    printf("Operacao realizada com sucesso.\n");
                }
                else if(z==num3){
                    printf("Operacao invalida.\n");
                }
                else{
                    printf("Conta nao encontrada\n");
                }
            }
            else{
                printf("Conta nao encontrada\n");
            }
        }
        else if(strcmp(ope, "Saldo")==0){
            printf("Insira o numero da conta desejada: ");
            scanf("%d%*c", &x);
            if(x==num1){
                printf("Saldo = %.2f\n", sal1);
            }
            else if(x==num2){
                printf("Saldo = %.2f\n", sal2);
            }
            else if(x==num3){
                printf("Saldo = %.2f\n", sal3);
            }
            else{
                printf("Conta nao encontrada\n");
            }
        }
    }
    printf("Conta %d\nSaldo: %.2f\nConta %d\nSaldo: %.2f\nConta %d\nSaldo: %.2f\n", num1, sal1,num2, sal2,num3, sal3);
    return ;
}
