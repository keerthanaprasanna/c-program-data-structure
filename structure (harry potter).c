#include<stdio.h>
struct book{
int num;
char name[1];
float price;
};
int main()
{
  struct book hp;
  hp.num=5678978;
  hp.price=1.0;
  strcpy(hp.name,"k");
  printf("Book number:%d\n",hp.num);
  printf("Book price:%f\n",hp.price);
  printf("Book name:%s\n",hp.name);  
}

