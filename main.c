#include <stdio.h>

int main() 
{
  double d, tien;
  scanf("%lf", &d);
  if( d<=1 )
  {
    (long int)tien=d*15000;
  }
  else if(d<=5)
  {
    (long int)tien= 1*15000 + (d-1)*13000;
  }
  else
  {
    (long int)tien= 1*15000+4*13000+(d-5)*11000;
  }
  
  printf("%ld", tien);
  return 0;
}