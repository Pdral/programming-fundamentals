#include <stdio.h>

int main(void) {
  float a, b;
  scanf("%f", &a);
  scanf("%f", &b);
  printf("Area = %5.2f\n", a*b);
  printf("Potencia = %5.2f W\n", a*b*18);
  return 0;
}
