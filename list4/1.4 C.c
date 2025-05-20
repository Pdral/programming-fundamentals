#include <stdio.h>
#include <math.h>

int main(){
    int i, n;
    printf("Quantas potencias de 2 serao impressas?\n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
        printf("2 ^ %d = %.lf\n", i, pow(2, i));
    return 0;
}
