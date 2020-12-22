#include <stdio.h>

int main()
{
   char arr1[] = "abc";
   char arr2[] = {'a','b','c','\0'};
   printf("%d\n",strlen(arr1)); //strlen:计算字符长度的函数
   printf("%d\n",strlen(arr2));
    return 0;
}
