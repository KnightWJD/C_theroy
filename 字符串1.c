#include <stdio.h>

int main()
{
   char arr1[] = "abc";
   //"abc" -- 'a' 'b' 'c' '\0' -- '\0':字符串结束的标志,不算做字符串的内容
   char arr2[] = {'a','b','c','\0'};
   printf("%s\n",arr1); //%s ：以字符串形式打印
   printf("%s\n",arr2);
    return 0;
