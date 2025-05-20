#include <stdio.h>

int main(){
    int ze=0, gal=0, gil=0, x;
    do{
        scanf("%d", &x);
        if(x==1)
            ze++;
        else if(x==2)
            gal++;
        else if(x==3)
            gil++;
    } while(x);
    if(ze>gal && ze>gil)
        printf("O vencedor eh Ze!");
    else if(gal>ze && gal>gil)
        printf("O vencedor eh Gal!");
    else if(gil>ze && gil>gal)
        printf("O vencedor eh Gil!");
    else if(ze==gal && gal==gil)
        printf("Empate triplo");
    else if(ze==gal)
        printf("Segundo turno entre Ze e Gal");
    else if(ze==gil)
        printf("Segundo turno entre Ze e Gil");
    else
        printf("Segundo turno entre Gil e Gal");
    return 0;
}
