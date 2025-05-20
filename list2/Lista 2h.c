#include <stdio.h>

int main(void) {
  int x, i;
  scanf("%d", &x);
  for(i=0;i<11;i++){
    printf("%d\n", x*i);
  }
  return 0;
}
