#include <stdio.h>

int main(void) {
  float x;
  scanf("%f", &x);
  printf("Dolar = %5.2f\n", x/3.95);
  printf("Marco alemao = %5.2f\n", x/4.25);
  printf("Libra esterlina = %5.2f\n", x/5.8);
  return 0;
}
