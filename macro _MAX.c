#include <stdio.h>
#define MAX(x,y) (x>y?x:y)//宏的定义
int main()
{
  int a = 13;
  int b = 18;
  int max = 0;
  max = MAX(a,b); //宏的方式
  printf("max = %d\n",max);
  return 0;
}

