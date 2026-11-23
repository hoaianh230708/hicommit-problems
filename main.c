#include <stdio.h>

int main() 
{
  double d;
  long int tien;
  scanf("%lf", &d);
  if( d<=1 )
  {
    tien=d*15000;
  }
  else if( d>1 || d<=5)
  {
    tien= 1*15000 + (d-1)*13000;
  }
  else
  {
    tien=15000+4*13000+(d-5)*11000;
  }
  printf(tien);
  return 0;
}