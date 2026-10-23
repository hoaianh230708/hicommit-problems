#include <stdio.h>

int main() {
  double w, h, bmi;
  scanf("%lf %lf", &w, &h);
  bmi=w/((h/100)*(h/100));
  if(bmi<18.5)
  {
    printf("UNDERWEIGHT");
  }
  else if(bmi>=18.5 && bmi<24.9999)
  {
    printf("NORMAL");
  }
  else if(bmi>=24.9999 && bmi<30)
  {
    printf("OVERWEIGHT");
  }
  else
  {
    printf("OBESE");
  }
  return 0;
}