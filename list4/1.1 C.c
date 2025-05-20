#include <stdio.h>
#include <math.h>

int main(){
    for(int i=0; i<20;i++){
        printf("2 ^ %d = %.lf\n", i, pow(2,i));
    }
    return 0;
}
