#include <stdio.h>

int main() {
  float dtb, drl;
  scanf("%.1f", &dtb);
  scanf("%.1f", &drl);
  if(dtb>=9.0 && drl>=90)
  {
    printf("HOC_BONG_XUAT_SAC");
  }
  else if(dtb>=9.0 && drl<90 && drl>=80 || dtb<9.0 && dtb>=8.0 && drl>=90 || dtb<9.0 && dtb>=8.0 && drl<90 && drl>=80)
  {
    printf("HOC_BONG_GIOI");
  }
  else if(dtb>=7.0 && dtb<8.0 && drl>=90 || dtb>=7.0 && dtb<8.0 && drl<90 && drl>=80 || dtb>=7.0 && dtb<8.0 && drl>=70 && drl<80)
  {
    printf("HOC_BONG_KHA");
  }
  else if(dtb<9.0 && dtb>=8.0 && drl>=70 && drl<80 || dtb>=9.0 && drl>=70 && drl<80)
  {
    printf("HOC_BONG_KHA");
  }
  return 0;
}