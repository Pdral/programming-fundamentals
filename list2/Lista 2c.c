#include <stdio.h>

int main(void) {
  float s, v;
  scanf("%f", &s);
  scanf("%f", &v);
  printf("%f\n", 0.04*v);
  printf("%f\n", 0.04*v+s);
  return 0;
}
