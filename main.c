
#include <stdio.h>

int main() {
  int d, m, y;
  

  scanf("%d %d %d", &d, &m, &y);

  if (m < 1 || m > 12 || d < 1 || y <= 0) 
  {
      printf("INVALID");
  }
  else if ( m==4 || m==6 || m==9 || m==11 )
  {
    if ( d==30)
    {
      printf("VALID");
    }
    else
    {
      printf("INVALID ");
    }
  }
  return 0;
}
