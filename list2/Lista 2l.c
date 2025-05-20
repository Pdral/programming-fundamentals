#include <stdio.h>

int main(void) {
  float ht, s, hx;
  scanf("%f",&ht);
  scanf("%f",&s);
  scanf("%f",&hx);
  printf("%5.2f", ht*s/8 + hx*s/4);
  return 0;
}
