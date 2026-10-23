#include <stdio.h>

int main() {
  int k;
  long long tien;
  scanf("%d", &k);
  if(k<=50)
  {
    tien=k*1678;
    printf("%lld", tien);
  }
  else if(k>50 && k<=100)
  {
    tien=50*1678+(k-50)*1734;
    printf("%lld", tien);
  }
  return 0;
}