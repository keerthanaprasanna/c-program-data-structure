#include <stdio.h>
int fact()
{
  printf("factorial");
  fact();
  return 5;
}
void main()
{
  int num = 5;
  int result = fact(num);
  printf("The factorial of %d is %d\n", num, result);
}


