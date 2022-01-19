#include<stdio.h>
int main()
{
  int x,y;
  printf("enter two number :");
  scanf("%d %d",&x,&y);

  while(y != 0)
  {
    x++;
    y--;
  }
  printf("sum of two values is %d", x);
  return 0;

}