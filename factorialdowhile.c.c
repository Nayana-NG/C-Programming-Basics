#include <stdio.h>
int main(void) {
  int i=1,n,fact=1;
  printf("enter the number");
  scanf("%d",&n);
  do{
    fact=fact*i;
    i++;
  }while(i<=n);
  printf("factorial of the number is %d",fact);
  return 0;
}


