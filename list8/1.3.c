#include <stdio.h>
#include <string.h>

int main(){
    int i, j, a;
    char b[200];
    double c;
    struct papel{
        int codigo;
        char desc[200];
        double valor;
        int q;
    };
    struct papel prod[10];
    for(i=0;i<10;i++){
        printf("Dados sobre o produto %d\n", i+1);
        printf("Codigo: ");
        scanf("%d%*c", &prod[i].codigo);
        printf("Descricao(max 200 caracteres): ");
        gets(prod[i].desc);
        printf("Valor: ");
        scanf("%lf", &prod[i].valor);
        printf("Quantidade em estoque:");
        scanf("%d", &prod[i].q);
    }
    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++){
            if(prod[i].codigo>prod[j].codigo){
                a=prod[i].codigo;
                prod[i].codigo = prod[j].codigo;
                prod[j].codigo = a;
                a=prod[i].q;
                prod[i].q = prod[j].q;
                prod[j].q = a;
                c=prod[i].valor;
                prod[i].valor = prod[j].valor;
                prod[j].valor = c;
                strcpy(b, prod[i].desc);
                strcpy(prod[i].desc, prod[j].desc);
                strcpy(prod[j].desc, b);
            }
        }
    }
    return 0;
}
