#include <stdio.h>

int main() {
  float dtb;
  scanf("%f", &dtb);
  if(dtb>=9.0)
  {
    printf("A");
  }
  else if(dtb>=8.0 && dtb<9.0)
  {
    printf("B+");
  }
  else if(dtb>=7.0 && dtb<8.0)
  {
    printf("B");
  }
  else if(dtb>=6.5 && dtb<7.0)
  {
    printf("C+");
  }
  return 0;
}