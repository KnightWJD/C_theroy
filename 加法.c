#include <stdio.h>


int main()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;

    //数据输入：使用scanf
    scanf("%d%d",&num1,&num2);  //取地址符号&
 //   int sum = 0; C语言语法规定，变量要定义在代码块的最前面
    sum = num1 + num2;
    printf("%d\n",sum);
    return 0;
}
