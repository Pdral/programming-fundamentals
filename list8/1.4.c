#include <stdio.h>
#include <math.h>

int main(){
    int i;
    double total=0.0, dias;
    struct banco{
        int numero, codigo, diav, mesv, anov, diap, mesp, anop;
        double valor, juros;
    };
    struct banco cliente[15];
    for(i=0;i<15;i++){
        printf("Informacoes do cliente %d\n", i+1);
        printf("Numero do documento: ");
        scanf("%d", &cliente[i].numero);
        printf("Codigo do cliente: ");
        scanf("%d", &cliente[i].codigo);
        printf("Data de vencimento(00/00/00): ");
        scanf("%d/%d/%d", &cliente[i].diav, &cliente[i].mesv, &cliente[i].anov);
        printf("Data de pagamento(00/00/00): ");
        scanf("%d/%d/%d", &cliente[i].diap, &cliente[i].mesp, &cliente[i].anop);
        printf("Valor da conta: ");
        scanf("%lf", &cliente[i].valor);
        if(cliente[i].anov==cliente[i].anop){
            if(cliente[i].mesv=cliente[i].mesp){
                if(cliente[i].diap>cliente[i].diav){
                    dias = cliente[i].diap-cliente[i].diav;
                    cliente[i].juros=cliente[i].valor*pow(0.02, dias);
                }
                else{
                    cliente[i].juros=0.0;
                }
            }
            else{
                if(cliente[i].mesp>cliente[i].mesv){
                    if(cliente[i].diap>=cliente[i].diav){
                        dias=(cliente[i].mesp-cliente[i].mesv)*30+cliente[i].diap-cliente[i].diav;
                    }
                    else{
                        dias=(cliente[i].mesp-cliente[i].mesv-1)*30+30-cliente[i].diav+cliente[i].diap;
                    }
                    cliente[i].juros=cliente[i].valor*pow(0.02, dias);
                }
                else{
                    cliente[i].juros=0.0;
                }
            }
        }
        else if(cliente[i].anop>cliente[i].anov){
            if(cliente[i].mesp>=cliente[i].mesv){
                if(cliente[i].diap>=cliente[i].diav){
                    dias=(cliente[i].mesp-cliente[i].mesv)*30+(cliente[i].anop-cliente[i].anov)*365+cliente[i].diap-cliente[i].diav;
                }
                else{
                    dias = (cliente[i].anop-cliente[i].anov)*365+(cliente[i].mesp-cliente[i].mesv-1)*30+30-cliente[i].diav+cliente[i].diap;
                }
            }
            else{
                if(cliente[i].diap>=cliente[i].diav){
                    dias = (cliente[i].anop-cliente[i].anov-1)*365+(12-cliente[i].mesv+cliente[i].mesp)*30+cliente[i].diap-cliente[i].diav;
                }
                else{
                    dias= (cliente[i].anop-cliente[i].anov-1)*365+(12-cliente[i].mesv+cliente[i].mesp)+30-cliente[i].diav+cliente[i].diap;
                }
            }
            cliente[i].juros=cliente[i].valor*pow(0.02, dias);
        }
        else{
            cliente[i].juros = 0.0;
        }
        total += cliente[i].juros;
    }
    printf("O total recebido com juros foi &.2lf", total);
    return 0;
}
