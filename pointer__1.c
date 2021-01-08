#include <stdio.h>
//#define MAX(x,y) (x>y?x:y)//宏的定义
int main()
{
  int a = 13; //四个字节
  int* p = &a;//取地址
  printf("%d\n",p);
  printf("%p\n",&a);
  *p = 20;// * - 解引用操作符
  printf("%d\n",a);

  //有一种变量是用来存放地址的-指针变量

  return 0;
}

