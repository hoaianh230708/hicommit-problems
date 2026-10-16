#include <stdio.h>

int main() {
  long long n;
  printf("Nhap so nguyen n: \n");
  scanf("%Ld", &n);
  if (n%2==0)
  {
    printf("CHAN");
  }
  else
  {
    printf("LE");
  }
  return 0;
}