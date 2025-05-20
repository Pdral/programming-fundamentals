#include <stdio.h>
#include <math.h>

int main(){
    double i, s=0.0, d;
    int a=0;
    d=1.0/3.0;
    for(i=0;i<51;i++){
        if(!a){
            s+= 1.0/(pow((2.0*i+1.0), 3.0));
            a=1;
        }

        else{
            s-= 1.0/(pow((2.0*i+1.0), 3.0));
            a=0;
        }



    }
    s=s*32.0;
    s= pow(s, d);
    printf("pi = %lf", s);
    return 0;
}
