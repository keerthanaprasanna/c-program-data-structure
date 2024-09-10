#include <stdio.h>
int main(void)
{
  int a;
  printf("enter a year\n");
  scanf("%d",&a);
if(a%4==0)
  printf(" a is leap year\n");
  else
  printf(" a is not a leap year\n");
return 0;
}
