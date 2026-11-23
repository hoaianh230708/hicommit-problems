#include <stdio.h>

int main() 
{
  int d, m, y;
  scanf("%d%d%d", &d, &m, &y);

  if( m<1 || m>12 || d<1 || y<0 )
  {
    printf("INVALID ");
  }
  return 0;
}