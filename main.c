#include <stdio.h>

int main() {
  int w, h;
  double bmi;
  scanf("%d", &w);
  scanf("%d", &h);
  bmi=w/((h/100)*(h/100));
  if(bmi<18.5)
  {
    printf("UNDERWEIGHT");
  }
  else if(bmi>=18.5 && bmi<25)
  {
    printf("NORMAL");
  }
  else if(bmi>=25 && bmi<30)
  {
    printf("OVERWEIGHT");
  }
  return 0;
}