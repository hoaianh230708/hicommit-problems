#include <stdio.h>

int main() {
  float dtb;
  scanf("%f", &dtb);
  if(dtb>=9.0)
  {
    printf("A");
  }
  else if(dtb>=7.0 && dtb<8.0)
  {
    printf("B+");
  }
  return 0;
}