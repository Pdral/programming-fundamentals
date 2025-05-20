#include <stdio.h>

int main(){
    double t=100.0, a=0.0, x=0.0;
    while(a!=t){
        a=a+t;
        t=t + (t/10);
        x++;
    }
    printf("Aquiles alcancara a tartaruga apos %lf s", x);
    return 0;
}
