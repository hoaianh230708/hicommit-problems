#include <stdio.h>

int main() 
{
  int abs;
  float gpa, min;
  scanf("%f%f%d", &gpa, &min, &abs);
  if(abs>3.0)
  {
    printf("FAIL_ATTENDANCE");
  }
  else
  {
    if(min<4.0)
    {
      printf("FAIL_SUBJECT");
    }
    else if(gpa>=8.0 && min>=7.0)
    {
      printf("EXCELLENT");
    }
  }
  return 0;
}