#include <stdio.h>
int main(void){
  int a;
  printf("enter year ");
  scanf("%d",&a);
  if (a%400==0){
    printf("%d is a leap year",a);
  }
   else if (a%100==0){
    printf("%d is not a leap year",a);
   }
     else if(a%4==0){
    printf("%d is a leap year",a);
  }
  else{
    printf("%d is not a leap year",a);
  }
    return 0;
}