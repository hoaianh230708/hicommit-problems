#include <stdio.h>
int main(){
  long long code;
  switch(code){
      case 1:printf("XEP_LOAI_XUAT_SAC");break;
      case 2:printf("XEP_LOAI_GIOI");break;
      case 3:printf("XEP_LOAI_KHA");break;
      case 4:printf("XEP_LOAI_TRUNG_BINH");break;
      default:printf("XEP_LOAI_XUAT_SAC");
  }
  return 0;
}