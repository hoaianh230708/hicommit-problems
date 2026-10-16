#include <stdio.h>

int main() {
  long distance, order_value;
  printf("Nhap khoang cach giao hang: %ld", distance,"(km)");
  scanf("%ld", &distance);
  printf("Nhap gia tri don hang: %ld", order_value, "(dong)");
  scanf("%ld", &order_value);
  if ( distance<=0 || order_value<0 ){
    printf("INVALID");
  } 
  else if (distance<=15 && order_value<=500000){
    printf("0");
  }
  else if (distance>=1 && distance<=5){
    printf("15000");
  }
  else if(distance>=6 && distance<=15){
    printf("25000");
  }
  else{
    printf("40000");
  }
  return 0;
}