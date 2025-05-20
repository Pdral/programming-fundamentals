#include <stdio.h>

int main(){
    double a=5000000, b=7000000;
    int anos=0;
    while(b>=a){
        a=a*1.03;
        b=b*1.02;
        anos++;
    }
    printf("O tempo necessario sera de %d anos", anos);
    return 0;
}
