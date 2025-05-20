#include <stdio.h>

int main(void) {
  int n, a;
  scanf("%d",&n);
  scanf("%d",&a);
  printf("%d anos\n", n-a);
  printf("%d meses\n", (n-a)*12);
  printf("%d dias\n", (n-a)*365);
  printf("%d semanas\n", (n-a)*365/7);
  return 0;
}
