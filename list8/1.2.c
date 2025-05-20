#include <stdio.h>
#include <string.h>

int main(){
    int n, i, mai=0;;
    double med=0.0, maior=0;
    struct oss{
        int numero;
        char data[10];
        double valor;
        char desc[200];
        char nome[100];
    };
    printf("Insira a quantidade de ordens de servico: ");
    scanf("%d", &n);
    struct oss os[n];
    for(i=0;i<n;i++){
        printf("Informacoes sobre a OS %d\n", i+1);
        printf("Numero: ");
        scanf("%d%*c", &os[i].numero);
        printf("Data(00/00/00): ");
        gets(os[i].data);
        printf("Valor: ");
        scanf("%lf%*c", &os[i].valor);
        printf("Descricao (200 caracteres max): ");
        gets(os[i].desc);
        printf("Nome (100 caracteres max): ");
        gets(os[i].nome);
        med+=os[i].valor;
        if(os[i].valor>maior){
            mai=i;
        }
    }
    med=med/n;
    printf("Media dos servicos: %.2lf\n", med);
    printf("Servico mais caro realizado por %s\n", os[mai].nome);
    printf("Descricao: %s\n", os[mai].desc);
    printf("Data: %s", os[mai].data);
    return 0;
}
