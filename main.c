#include <stdio.h>

int main() {
  double w, h, bmi;
  scanf("%lf", &w);
  scanf("%lf", &h);
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