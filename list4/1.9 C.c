#include <stdio.h>

int main(){
    double m1=0.0, m2=0.0, x, m=0.0, n, i;
    printf("Insira o numero de alunos: ");
    scanf("%lf", &n);
    printf("Insira as notas dos alunos:\n");
    for(i=0;i<n;i++){
        scanf("%lf", &x);
        m=m+x;
        if(x>m1){
            m2=m1;
            m1=x;
        }
        else if(x>m2)
            m2=x;
    }
    printf("A media das notas eh %.1lf\nA maior nota eh %.1lf\nA segunda maior nota eh %.1lf", m/n, m1, m2);
    return 0;
}
