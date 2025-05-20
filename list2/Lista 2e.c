#include <stdio.h>

int main(void) {
  float b, B, h;
  printf("Digite a medida da base maior do trapézio\n");
  scanf("%f", &B);
  printf("Digite a medida da base menor do trapézio\n");
  scanf("%f", &b);
  printf("Digite a medida da altura do trapézio\n");
  scanf("%f", &h);
  printf("Área = %f", (B+b)*h/2);
  return 0;
}
