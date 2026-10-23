#include <stdio.h>

int main() {
  float dtb, drl;
  scanf("%f", &dtb);
  scanf("%f", &drl);
  if(dtb>=9.0 && drl>=90)
  {
    printf("HOC_BONG_XUAT_SAC\n");
  }
  else if(dtb>=9.0 && drl<90 && drl>=80 || dtb<9.0 && dtb>=8.0 && drl>=90 || dtb<9.0 && dtb>=8.0 && drl<90 && drl>=80)
  {
    printf("HOC_BONG_GIOI\n");
  }
  else if(dtb>=7.0 && dtb<8.0 && drl>=90 || dtb>=7.0 && dtb<8.0 && drl<90 && drl>=80 || dtb>=7.0 && dtb<8.0 && drl>=70 && drl<80)
  {
    printf("HOC_BONG_KHA\n");
  }
  else if(dtb<9.0 && dtb>=8.0 && drl>=70 && drl<80 || dtb>=9.0 && drl>=70 && drl<80)
  {
    printf("HOC_BONG_KHA\n");
  }
  else 
  {
    printf("KHONG_DAT");
  }
  return 0;
}