#include<stdio.h>
int main(){
  int i=1,n,fact=1;
  printf("Enter the number");
  scanf("%d",&n);
  do{
    fact=fact*i;
    i++;
  }while(i<=n);
  printf("factorial of %d =%d\n",n,fact);
  return 0;
}

