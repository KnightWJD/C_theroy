#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组
    printf("%d\n",arr[4]); //以下标的方式访问元素，输出5
    int i = 0;
    while(i<10)
    {


        printf("%d\n",arr[i]);
        i++;
    }
    return 0;

}
