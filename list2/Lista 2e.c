#include <stdio.h>

int main(void) {
  float b, B, h;
  printf("Digite a medida da base maior do trap�zio\n");
  scanf("%f", &B);
  printf("Digite a medida da base menor do trap�zio\n");
  scanf("%f", &b);
  printf("Digite a medida da altura do trap�zio\n");
  scanf("%f", &h);
  printf("�rea = %f", (B+b)*h/2);
  return 0;
}
