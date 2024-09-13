#include<stdio.h>
int main(){
  FILE*fp;
  char c[100];
  fp=fopen("keer.txt","r");
  fgets(c,20,fp);
  printf("character is %s\n",c);
  fclose(fp);
  return 0;
}

