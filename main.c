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
  else if(k>100 && k<=200)
  {
    tien=tien=50*1678+50*1734+(k-100)*2014;
    printf("%lld", tien);
  }
  return 0;
}