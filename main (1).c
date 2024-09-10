#include <stdio.h>
int main(void)
{
  int num,rev=0,temp,i;
  printf("enter a number\n");
  scanf("%d",&num);
  temp=num;
  while(num!=0)
  i=num%10;
  rev=rev*10+i;
  num=num/10;
  if(temp==rev)  
  printf("rev is palindrome\n");
  else
  printf("rev is not palindrome\n");

}
