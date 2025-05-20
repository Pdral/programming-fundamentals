#include <stdio.h>
#include <math.h>

int main(){
    int i;
    for(i=1;i<=13*2;i++){
        if(i==26){
            printf("O numero de erros no ultimo programa sera %.lf", pow(2, i));
        }
    }
    return 0;
}
